#include <bits/stdc++.h>
using namespace std;

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

    int low = 0, high = v.size() - 1;
    int f = -1, l = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (v[mid] == t)
        {
            f = mid;
            high = mid - 1;
        }
        else if (v[mid] < t)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    low = 0, high = v.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (v[mid] == t)
        {
            l = mid;
            low = mid + 1;
        }
        else if (v[mid] < t)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    int res = l - f + 1;
    cout << res << endl;

    return 0;
}