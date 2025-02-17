#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, s=0,a=0,b=1;
    cin >> n;
    if (n == a+1 or n == b+1)
    {
        cout << 1;
    }
    else
    {
        for (i = 2; i <= n; i++)
        {
            s = a+b;
            a=b;
            b=s;
        }
        cout<<s;
    }
    
}
