#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void reverseArray(vector<int> &arr)
    {
        int i;
        int len = arr.size();
        if (i >= len / 2)
            return;

        swap(arr[i], arr[len - i - 1]);

        reverseArray(arr); 
    }
};

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n); 

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    Solution s;
    s.reverseArray(arr); 

    for (int num : arr)
        cout << num << " ";

    return 0;
}
