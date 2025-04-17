#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sumofdivisor(vector<int> &nums, int m)
    {
        int s = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            s = s + ceil((double)(nums[i]) / (double)(m));
        }
        return s;
    }

    int smallestDivisor(vector<int> &nums, int threshold)
    {
        int l = 1, h = *max_element(nums.begin(), nums.end());
        int ans = -1;
        while (l <= h)
        {
            int m = l + (h - l) / 2;
            if (sumofdivisor(nums, m) <= threshold)
            {
                ans = m;
                h = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        return ans;
    }
};

int main()
{
    int n;
    cin >> n;

    int t;
    cin >> t;

    vector<int> v(n);
    for (int &i : v)
    {
        cin >> i;
    }

    Solution s;
    int res = s.smallestDivisor(v, t);

    cout << res;
}