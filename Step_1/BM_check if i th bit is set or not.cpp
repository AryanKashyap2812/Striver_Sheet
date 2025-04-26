#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i;
    cin >> i;

    if ((n >> i) & 1 == 0)
        cout << "not set";
    else
        cout << "set";
}