#include <bits/stdc++.h>
using namespace std;

// T.C : O(n)

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int &i : v)
    {
        cin >> i;
    }

    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && v[j - 1] > v[j])
        {
            swap(v[j - 1], v[j]);
            j--;
        }
    }

    for (const int &i : v)
    {
        cout << i << " ";
    }
}