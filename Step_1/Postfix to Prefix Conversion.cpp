#include "bits/stdc++.h"
using namespace std;

class Solution
{
public:
    string postfixtoprefix(string s)
    {
        int i = 0, n = s.length();
        stack<string> st;

        while (i < n)
        {
            if (isalnum(s[i]))
            {
                st.push(string(1, s[i]));
            }

            else
            {
                string t1 = st.top();
                st.pop();
                string t2 = st.top();
                st.pop();

                st.push(s[i] + t2 + t1);
            }
            i++;
        }
        return st.top();
    }
};

int main()
{
    string s;
    cin >> s;

    Solution sl;
    cout << sl.postfixtoprefix(s);
}