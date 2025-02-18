#include <bits/stdc++.h>
using namespace std;

void print4(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i<<" ";
        }
        cout << endl;
    }
}

int main()
{

    int n;
    cin >> n;
    print4(n);
    return 0;
}