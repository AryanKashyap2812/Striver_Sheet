#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<long long> factorialNumbers(long long n)
    {
        vector<long long> ls;
        long long f = 1, c = 1;
        while (f <= n)
        {
            ls.push_back(f);
            c++;
            f = f * c;
        }
        return ls;
    }
};

int main()
{
    long long n;
    cin >> n;

    Solution s;
    vector<long long> ls = s.factorialNumbers(n);

    for (long long num : ls)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}