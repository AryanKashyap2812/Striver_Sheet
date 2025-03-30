#include <bits/stdc++.h>
using namespace std;

// Selection Sort  T.C=O(n^2)

int main()
{
    int n;
    cin >> n;

    vector<int> vec(n, 0);
    for (int &i : vec)
    {
        cin >> i; // i is a reference (&i), meaning it directly modifies
                  // the vector's elements instead of working on a copy.
    }

    for (int i = 0; i <= n - 2; i++)
    {
        int min = i;
        for (int k = i; k <= n - 1; k++)
        {
            if (vec[k] < vec[min])
            {
                min = k;
            }
        }
        swap(vec[min], vec[i]);
    }

    for (const int &i : vec) //  const keyword prevents modification of elements inside the loop
    {
        cout << i << " ";
    }
}
