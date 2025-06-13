#include "bits/stdc++.h"
using namespace std;

class Solution
{
public:
    int mySqrt(int x)
    {
        long long low = 0, mid, high = x, ans = 1;

        while (low <= high)
        {
            mid = low + (high - low) / 2;
            if ((mid * mid) <= x)
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return ans;
    }
};

int main()
{
    int x;
    cin >> x;

    Solution s;

    cout << s.mySqrt(x);
}