#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &v, int n, int t)
{
    int ans = -1;
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (v[mid] >= t)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
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
    cout << lowerBound(v, n, t);
}