#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int &i : v)
    {
        cin >> i;
    }

    int t = v[0];
    for (int i = 1; i < n; i++)
    {
        v[i - 1] = v[i];
    }
    v[n - 1] = t;

    for (const int &i : v)
    {
        cout << i << " ";
    }
}