#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)
    {
        long long xorr = 0;
        vector<long long int> v(2);

        for (int i = 0; i < N; i++)
        {
            xorr = xorr ^ Arr[i];
        }

        long long rm = xorr & ~(xorr - 1);
        
        long long b1 = 0, b2 = 0;
        for (int i = 0; i < N; i++)
        {
            if (Arr[i] & rm)
                b1 = b1 ^ Arr[i];
            else
                b2 = b2 ^ Arr[i];
        }

        if (b1 > b2)
        {
            v[0] = b1;
            v[1] = b2;
        }
        else if (b2 > b1)
        {
            v[0] = b2;
            v[1] = b1;
        }

        return v;
    }
};

int main()
{
    long long int N;
    cin >> N;

    long long int v[N];
    for (long long int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    Solution s;
    vector<long long int> result = s.twoOddNum(v, N);

    for (const auto &i : result)
    {
        cout << i << " ";
    }
}