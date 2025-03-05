#include <bits/stdc++.h>
using namespace std;

class Solution  // T.C = log (min (a,b))
{
public:
    int gcd(int a, int b)
    {
        while (a < 0 && b < 0)
        {
            if (a > b)
                a = a % b;
            else
                b = b % a;
        }
        if (a == 0)
            return b;
        else
            return a;
    }
};

int main()
{
    int a, b;
    cin >> a >> b;
    Solution s;
    cout << s.gcd(a, b);
}