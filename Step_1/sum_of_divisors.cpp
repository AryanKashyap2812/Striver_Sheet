#include <bits/stdc++.h>
using namespace std;

// Brute force method // T.C=n^2
class Solution
{
public:
    int sumOfDivisors(int n)
    {
        int i, j, s = 0;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    s = s + j;
                    if ((i / j) != j)
                    {
                        s = s + (i / j);
                    }
                }
            }
        }
        return s;
    }
};

// Optimized approach
//  T.C= n

// class Solution
// {
// public:
//     int sumOfDivisors(int n)
//     {
//         int s = 0;
//         for (int i = 1; i <= n; i++)
//         {
//             s += (n / i) * i; // i contributes to all multiples of i
//         }
//         return s;
//     }
// };

int main()
{
    int n;
    cin >> n;
    Solution s;
    cout << s.sumOfDivisors(n);
}