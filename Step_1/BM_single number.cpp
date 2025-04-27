#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int x = 0;
        for (int num : nums)
        {
            x ^= num;
        }
        return x;
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
    cout << s.singleNumber(v);
}