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

    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != 0)
        {
            temp.push_back(v[i]);
        }
    }

    for (int i = 0; i < temp.size(); i++)
    {
        v[i] = temp[i];
    }

    for (int i = temp.size(); i < n; i++)
    {
        v[i] = 0;
    }

    for (const int &i : v)
    {
        cout << i << " ";
    }
}