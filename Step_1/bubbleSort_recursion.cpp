#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void bubblesorthelper(vector<int> &arr, int n)
    {

        if (n == 1)
            return;

        int f = 0;
        for (int i = 0; i < n-1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                f = 1;
            }
        }
        if (f == 0)
        {
            return;
        }

        bubblesorthelper(arr, n - 1);
    }

    void bubbleSort(vector<int> &arr)
    {
        int n = arr.size();
        bubblesorthelper(arr, n);
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
    s.bubbleSort(arr);

    for (const int &i : arr)
    {
        cout << i << " ";
    }
}