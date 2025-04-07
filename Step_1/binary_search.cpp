#include <bits/stdc++.h>
using namespace std;

// T.C= O(log n base 2)
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int n = nums.size();
        int low = 0, high = n - 1;

        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (nums[mid] == target)
            {
                return mid;
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
        return -1;
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
    cout << s.search(v, t);
}