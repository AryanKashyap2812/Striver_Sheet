#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> frequencyCount(vector<int> &arr)
    {
        // TC: n SC:1
        vector<int> vec(arr.size(), 0);
        for (int i = 0; i < arr.size(); i++)
        {
            vec[arr[i] - 1]++;
        }
        return vec;
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
    vector<int> c = s.frequencyCount(arr);
    for (int &i : c)
    {
        cout << i << " ";
    }
}