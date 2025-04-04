#include <bits/stdc++.h>
using namespace std;

// T.C - O(n+d)
// S.C - O(d)

void leftplaces(vector<int> &v, int d, int n)
{
    d = d % n;

    vector<int> temp; // Copy first d elements
    for (int i = 0; i < d; i++)
    {
        temp.push_back(v[i]);
    }

    // vector<int> temp(v.begin(), v.begin() + d); // Copy first d elements

    for (int i = d; i < n; i++)
    {
        v[i - d] = v[i];
    }

    for (int i = n - d; i < n; i++)
    {
        v[i] = temp[i - (n - d)];
    }
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

    leftplaces(v, d, n);

    for (const int &i : v)
    {
        cout << i << " ";
    }
}