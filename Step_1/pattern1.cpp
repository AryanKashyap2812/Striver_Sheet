#include <bits/stdc++.h>
using namespace std;

void print1(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
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
    print1(n);
    return 0;
}