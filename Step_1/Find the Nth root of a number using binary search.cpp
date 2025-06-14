#include "bits/stdc++.h"
using namespace std;

class Solution
{
public:
    int nthRoot(int n, int m)
    {
        int low = 1, high = m, mid;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            if (mult(mid, n, m) == 1)
            {
                return mid;
            }
            else if (mult(mid, n, m) == 0)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return -1;
    }

    int mult(int mid, int n, int m)  // This function prevents the problem of overflow
    {
        long long ans = 1;

        for (int i = 1; i <= n; i++)
        {
            ans = ans * mid;
            if (ans > m)
                return 2;
        }

        if (ans == m)
            return 1;

        return 0;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    Solution s;
    cout << s.nthRoot(n, m);
}