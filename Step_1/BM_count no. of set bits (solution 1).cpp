#include <bits/stdc++.h>
using namespace std;

int countsetbits(int n)
{
    int c = 0;
    while (n > 1)
    {
        c += n & 1;
        n = n >> 1;
    }
    
    if (n == 1)
        c++;

    return c;
}

int main()
{
    int n;
    cin >> n;
    int c = countsetbits(n);
    cout << c;
}