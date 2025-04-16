#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findKRotation(vector<int> &nums)
    {
        int low = 0, high = nums.size() - 1;
        int minm = INT_MAX;

        while (low <= high)
        {

            int mid = low + (high - low) / 2;

            // if (nums[low] == nums[mid] && nums[mid] == nums[high]) // this is wrong approch
            // {
            //     low++;
            //     high--;
            // }

            if (nums[low] <= nums[mid])
            {
                minm = min(minm, nums[low]);
                low = mid + 1;
            }

            if (nums[mid] <= nums[high])
            {
                minm = min(minm, nums[mid]);
                high = mid - 1;
            }
        }

        auto it = find(nums.begin(), nums.end(), minm);
        int index = distance(nums.begin(), it);

        return index;
    }
};

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int &i : v)
    {
        cin >> i;
    }

    Solution s;
    int res = s.findKRotation(v);

    cout << res;
}