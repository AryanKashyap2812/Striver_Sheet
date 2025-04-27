#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findXOR(int l, int r)
    {
        int x = 0;
        for (int i = l; i < (r + 1); i++)
        {
            x ^= i;
        }

        return x;
    }
};

int main()
{
    int l, r;
    cin >> l >> r;

    Solution s;
    cout << s.findXOR(l, r);
}