#include "bits/stdc++.h"
using namespace std;

void reverse(int i, int n, vector<int> &v)
{
    if (i >= n / 2)
        return;
    swap(v[i], v[n - i - 1]);
    reverse(i + 1, n, v);
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int &i : v)
    {
        cin >> i;
    }

    reverse(0, n, v);

    for (const int &i : v)
    {
        cout << i << " ";
    }
}