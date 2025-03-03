#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        int a = x, d;
        long rev = 0;
        if (a < 0)
        {
            return false;
        }
        else
        {
            while (a > 0)
            {
                d = a % 10;
                rev = rev * 10 + d;
                a = a / 10;
            }
            return (rev == x);
        }
    }
};

int main()
{
    int x;
    cin >> x;
    Solution s;
    cout << (s.isPalindrome(x) ? "true" : "false");
    return 0;
}