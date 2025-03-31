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

    for (int i = n - 1; i >= 0; i--)
    {
        for (int k = 0; k < i; k++)
        {
            if (v[k] > v[k + 1])
            {
                swap(v[k], v[k + 1]);
            }
        }
    }
    for (const int &i : v)
    {
        cout << i << " ";
    }
}