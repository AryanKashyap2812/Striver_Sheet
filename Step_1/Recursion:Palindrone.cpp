#include "bits/stdc++.h"
using namespace std;

bool pali(int i, int n, vector<string> &v)
{
    if (i >= n / 2)
        return true;
    if (v[i] != v[n - i - 1])
        return false;

    return pali(i + 1, n, v);
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    vector<string> v(n);
    for (string &i : v)
    {
        getline(cin, i); // reads full line (with spaces)
    }

    bool ans = pali(0, n, v);
    cout << boolalpha << ans;
}