#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findIndex(const vector<int> &nums, int target, bool findFirst)
    {
        int low = 0, high = nums.size() - 1, ans = -1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
            {
                ans = mid;
                if (findFirst)
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int> &nums, int target)
    {
        int first = findIndex(nums, target, true);
        int last = findIndex(nums, target, false);
        return {first, last};
    }
};

int main()
{
    int n;
    cin >> n;

    int target;
    cin >> target;

    vector<int> nums(n);
    for (int &i : nums)
    {
        cin >> i;
    }

    Solution s;
    vector<int> v = s.searchRange(nums, target);

    for (const int &i : v)
    {
        cout << i << " ";
    }
}