#include <bits/stdc++.h>
using namespace std;

class Solution // Time Complexity: O(log₁₀(x)) // Space Complexity: O(1)
{
public:
    int reverse(int x)
    {
        int a = x, d, c = 0;
        int y = INT_MAX;
        int z = INT_MIN;
        long rev = 0;
        while (a != 0)
        {
            d = a % 10;
            if (d == 0 && c == 0)
            {
                a = a / 10;
                continue;
            }
            else
            {
                rev = rev * 10 + d;
                a = a / 10;
                c++;
            }
        }
        if (rev < y && rev > z)
        {
            return rev;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    int x;
    cin >> x;
    Solution s;
    cout << s.reverse(x);
}