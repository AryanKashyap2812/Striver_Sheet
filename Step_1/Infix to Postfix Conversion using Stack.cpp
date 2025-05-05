#include "bits/stdc++.h"
using namespace std;

class Solution
{
public:
    string infixtopostfix(string s)
    {
        int i = 0;
        int n = s.length();
        stack<char> st;
        string ans = "";

        while (i < n)
        {

            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) // if (isalnum(s[i])) // letter or digit
            {
                ans = ans + s[i];
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
                st.pop();
            }

            else
            {
                while (!st.empty() && priority(s[i]) <= priority(st.top()))
                {
                    ans += st.top();
                    st.pop();
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
        return ans;
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
};

int main()
{
    string s;
    cin >> s;

    Solution sl;
    string str = sl.infixtopostfix(s);

    cout << str;
}