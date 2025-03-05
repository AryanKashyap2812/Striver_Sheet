#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool armstrongNumber(int n)
    {
        int a = n, d;
        double s = 0.0;
        while (a > 0)
        {
            d = a % 10;
            s = s + pow(d, 3);
            a = a / 10;
        }
        if (n == s)
        {
            return true;
        }
        else
            return false;
    }
};

int main()
{
    int n;
    cin >> n;
    Solution s;
    cout << (s.armstrongNumber(n) ? "true" : "false");
}