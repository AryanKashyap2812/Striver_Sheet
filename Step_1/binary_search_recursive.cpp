#include <bits/stdc++.h>
using namespace std;

// T.C= O(log n base 2)

class Sl
{
public:
    int search(vector<int> &nums, int low, int high, int target)
    {
        if (low > high)
            return -1;
        int mid = (low + high) / 2;
        if (nums[mid] == target)
            return mid;
        else if (target > nums[mid])
            return search(nums, mid + 1, high, target);
        else
            return search(nums, low, mid - 1, target);
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

    int low = 0;
    int high = v.size();

    Sl d;
    cout << d.search(v, low, high, t);
}