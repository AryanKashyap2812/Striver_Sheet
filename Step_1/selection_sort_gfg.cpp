#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void selectionSort(vector<int> &arr)
    {
        for (int i = 0; i <= arr.size() - 2; i++)
        {
            int min = i;
            for (int j = i; j <= arr.size() - 1; j++)
            {
                if (arr[j] < arr[min])
                    min = j;
            }
            swap(arr[i], arr[min]);
        }
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
    s.selectionSort(arr);
    for (const int &i : arr)
    {
        cout << i << " ";
    }
}