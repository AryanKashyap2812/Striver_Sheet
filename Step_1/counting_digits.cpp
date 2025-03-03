#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int evenlyDivides(int n)
    {
        int a = n, d, c = 0;
        while (a > 0)
        {
            d = a % 10;
            if (d == 0)
            {
                a = a / 10;
                continue;
            }

            else if (n % d == 0)
            {
                c++;
            }
            a = a / 10;
        }
        return c;
    }
};

int main()
{
    int n, p;
    cin >> n;
    Solution s;
    p = s.evenlyDivides(n);
    cout << p;
}