#include <bits/stdc++.h>
using namespace std;

// T.C - O(2n)
// S.C - O(1)

void rightplaces(vector<int> &v, int d, int n)
{

    d = n - d;
    reverse(v.begin(), v.begin() + d);
    reverse(v.begin() + d, v.end());
    reverse(v.begin(), v.end());
}

int main()
{
    int n;
    cin >> n;

    int d;
    cin >> d;

    vector<int> v(n);
    for (int &i : v)
    {
        cin >> i;
    }

    rightplaces(v, d, n);

    for (const int &i : v)
    {
        cout << i << " ";
    }
}