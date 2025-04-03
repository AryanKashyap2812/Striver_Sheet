#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int k = 0;
        for (int j = 1; j < nums.size(); j++)
        {
            if (nums[k] != nums[j])
            {
                nums[k + 1] = nums[j];
                k++;
            }
        }

        return k + 1;

        //         int c = 0;
        //         for (const int &u : nums)
        //         {
        //             if (c <= k)
        //             {
        //                 return u;
        //             }
        //             else{
        //                 return "_ ";
        //             }
        //         }
    }
};

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int &i : nums)
    {
        cin >> i;
    }
    Solution s;
    s.removeDuplicates(nums);
}