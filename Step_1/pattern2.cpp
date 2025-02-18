#include <bits/stdc++.h>
using namespace std;

void print2(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{

    int n;
    cin >> n;
    print2(n);
    return 0;
}