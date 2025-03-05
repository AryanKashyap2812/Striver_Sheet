#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> lcmAndGcd(int a, int b)
    {
        int i, gcd, lcm;
        
        for (i = 1; i <= min(a, b); i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                gcd = i;
            }
        }
        lcm = (a * b) / gcd;
        return {lcm, gcd};
    }
};

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    Solution s;
    vector<int>ls=s.lcmAndGcd(a,b);
    cout << ls[0]<<" "<<ls[1];  // cout never gives output as vector so we have to print the vector elements one by one
}