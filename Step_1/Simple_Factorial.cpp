#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int compare(int n)
    {
        int f = 1;
        for (int i = 1; i <= n; i++)
        {
            f = f * i;
        }
        return f;
    }
};

int main()
{
    int n;
    cin >> n;
    Solution s;
    cout << s.compare(n);
    return 0;
}