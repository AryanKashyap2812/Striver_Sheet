#include <bits/stdc++.h>
using namespace std;

// T.C:O(n)
class Solution
{
public:
    int largest(vector<int> &arr)
    {
        int l = arr[0];
        int i;
        for (i = 0; i < arr.size(); i++)
        {
            if (arr[i] > l)
            {
                l = arr[i];
            }
        }
        return l;
    }
};

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &i : arr)
    {
        cin >> i;
    }

    Solution s;
    cout << s.largest(arr);
}