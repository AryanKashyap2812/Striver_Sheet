#include <bits/stdc++.h>
using namespace std;


// T.C :O(n^2) (worst case)
// T.C :O(n) (best case)

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
        int flag = 0;
        for (int j = 0; j < i; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }

    for (const int &i : v)
    {
        cout << i <<" ";
    }

}