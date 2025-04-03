#include <bits/stdc++.h>
using namespace std;

// T.C - O(n)
// S.C - O(1)

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int &i : v)
    {
        cin >> i;
    }

    int k = 0;
    for (int j = 1; j < n; j++)
    {
        if (v[j] != v[k])
        {
            v[k + 1] = v[j];
            k++;
        }
    }

    cout << k + 1 << endl;

    int count = 0;
    for (const int &i : v)
    {
        if (count <= k)
        {
            cout << i << " ";
        }
        else
        {
            cout << "_ ";
        }
        count++;
    }

    cout << endl;
    return 0;
}