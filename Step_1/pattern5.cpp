#include <bits/stdc++.h>
using namespace std;

void print5(int n)
{
    int i, j;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*"<<" ";
        }
        cout << endl;
    }
}

int main()
{

    int n;
    cin >> n;
    print5(n);
    return 0;
}