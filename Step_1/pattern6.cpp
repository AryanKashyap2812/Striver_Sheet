#include <bits/stdc++.h>
using namespace std;
void print6(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            cout << " ";
        }
        for (j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }
        for (j = 0; j < n - 1 - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    print6(n);
    return 0;
}