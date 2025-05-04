#include "bits/stdc++.h"
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        int l = s.length();
        stack<char> st;

        for (int i = 0; i < l; i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                st.push(s[i]);

            else
            {
                if (st.empty())
                    return false;

                char ch = st.top();
                st.pop();

                if (s[i] == ')' && ch == '(' || s[i] == ']' && ch == '[' || s[i] == '}' && ch == '{')
                    continue;
                else
                    return false;
            }
        }
        return st.empty();
    }
};

int main()
{
    string s;
    cin >> s;
    Solution sl;
    bool v = sl.isValid(s);
    cout << boolalpha << v;
}