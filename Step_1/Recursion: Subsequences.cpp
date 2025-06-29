#include "bits/stdc++.h"
using namespace std;

void seq(int ind, vector<int> &s, vector<int> &v, int n)
{
    if (ind == n)
    {
        for (auto it : s)
        {
            cout << it << " ";
        }

        if (s.size() == 0)
        {
            cout << "{}";
        }

        cout << endl;
        return;
    }

    s.push_back(v[ind]);
    seq(ind + 1, s, v, n);
    s.pop_back();
    seq(ind + 1, s, v, n);
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

    vector<int> s;
    seq(0, s, v, n);
}