#include "bits/stdc++.h"
using namespace std;

void seq(int ind, vector<int> &ds, int s, int sum, vector<int> &v, int n) // ind = index of the new vector ds, ds = new vector in which subseq will be stored, s = sum of the subseq of the vector v, sum = given in the question, v = vector given in the question, n = index of the vector v

{
    if (ind == n)
    {
        if (s == sum)
        {
            for (auto it : ds)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }
    ds.push_back(v[ind]);
    s += v[ind];

    seq(ind + 1, ds, s, sum, v, n);

    s -= v[ind];
    ds.pop_back();

    seq(ind + 1, ds, s, sum, v, n);
}

int main()
{
    int n;
    cin >> n;

    int sum;
    cin >> sum;

    vector<int> v(n);
    for (int &i : v)
    {
        cin >> i;
    }

    vector<int> ds;

    seq(0, ds, 0, sum, v, n);
}