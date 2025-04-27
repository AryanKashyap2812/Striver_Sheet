#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findXOR(int l, int r)
    {
        int x = rangeXOR(l - 1) ^ rangeXOR(r);
        return x;
    }

    int rangeXOR(int n)
    {
        if (n % 4 == 1)
            return 1;
        else if (n % 4 == 2)
            return (n + 1);
        else if (n % 4 == 3)
            return 0;
        else
            return n;
    }
};

int main()
{
    int l, r;
    cin >> l >> r;

    Solution s;
    cout << s.findXOR(l, r);
}