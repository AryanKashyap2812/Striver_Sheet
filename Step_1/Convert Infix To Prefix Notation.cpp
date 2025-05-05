#include "bits/stdc++.h"
using namespace std;

class Solution
{
public:
    string infixtoprefix(string s)
    {
        int i = 0;
        stack<char> st;
        int n = s.length();
        string ans = "";
        s = reverseAndSwapBrackets(s);

        while (i < n)
        {
            if (isalnum(s[i]))
            {
                ans += s[i];
            }

            else if (s[i] == '(')
            {
                st.push(s[i]);
            }

            else if (s[i] == ')')
            {
                while (!st.empty() && st.top() != '(')
                {
                    ans += st.top();
                    st.pop();
                }
                if (!st.empty())
                    st.pop();
            }

            else
            {
                if (s[i] == '^')
                {
                    while (!st.empty() && priority(s[i]) <= priority(st.top()))
                    {
                        ans += st.top();
                        st.pop();
                    }
                }

                else
                {
                    while (!st.empty() && priority(s[i]) < priority(st.top()))
                    {
                        ans += st.top();
                        st.pop();
                    }
                }
                st.push(s[i]);
            }
            i++;
        }

        while (!st.empty())
        {
            ans = ans + st.top();
            st.pop();
        }
        return reverseAndSwapBrackets(ans);
    }

    int priority(char s)
    {
        if (s == '^')
            return 3;
        else if (s == '*' || s == '/')
            return 2;
        else if (s == '+' || s == '-')
            return 1;
        else
            return -1;
    }

    string reverseAndSwapBrackets(string s)
    {
        int l = s.length();
        string rs;

        for (int i = l - 1; i >= 0; i--)
        {
            char c = s[i];
            if (c == '(')
                rs += ')';
            else if (c == ')')
                rs += '(';
            else
                rs += c;
        }

        return rs;
    }
};

int main()
{
    string s;
    cin >> s;

    Solution sl;
    string str = sl.infixtoprefix(s);

    cout << str;
}