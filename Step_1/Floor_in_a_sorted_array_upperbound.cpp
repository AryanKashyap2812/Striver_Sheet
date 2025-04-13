#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findFloor(vector<int> &arr, int x)
    {
        int ans = -1;
        int low = 0, high = arr.size() - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[mid] <= x)
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
    int n;
    cin >> n;

    int target;
    cin >> target;

    vector<int> v(n);
    for (int &i : v)
    {
        cin >> i;
    }
    Solution s;
    cout << s.findFloor(v, target);
}