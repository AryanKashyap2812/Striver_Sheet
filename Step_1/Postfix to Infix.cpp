#include "bits/stdc++.h"
using namespace std;

class Solution
{
public:
    string postfixtoinfix(string s)
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

                string con = '(' + t2 + s[i] + t1 + ')';
                st.push(con);
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
    cout << sl.postfixtoinfix(s);
}