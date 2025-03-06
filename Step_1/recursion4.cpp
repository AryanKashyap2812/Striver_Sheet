#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sumOfSeries(int n)
    {
        if (n == 0)
            return 0;

        return pow(n, 3) + sumOfSeries(n - 1);
    }
};

int main()
{
    int n;
    cin >> n;
    Solution s;
    cout << s.sumOfSeries(n);
}