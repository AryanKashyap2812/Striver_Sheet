#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string compareNM(int n, int m)
    {
        if (n < m)
        {
            return "lesser";
        }
        else if (n == m)
        {
            return "equal";
        }
        else
        {
            return "greater";
        }
    }
};

int main()
{
    int n, m;
    cin >> n >> m;
    Solution s;
    cout << s.compareNM(n, m);
    return 0;
}
