#include <bits/stdc++.h>
using namespace std;

void print3(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j<<" ";
        }
        cout << endl;
    }
}

int main()
{

    int n;
    cin >> n;
    print3(n);
    return 0;
}