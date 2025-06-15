#include "bits/stdc++.h"
using namespace std;

class Solution
{
public:
    int findmax(vector<int> &piles)
    {
        int maxi = INT_MAX;
        int n = piles.size();

        for (int i = 0; i < n; i++)
        {
            maxi = max(piles[i], maxi);
        }
        return maxi;
    }

    int calculatetotalhours(vector<int> &piles, int hourly)
    {
        int total_hour = 0;
        int n = piles.size();

        for (int i = 0; i < n; i++)
        {
            total_hour += ceil((double)piles[i] / (double)hourly);
        }
        return total_hour;
    }

    int minEatingSpeed(vector<int> &piles, int h)
    {
        int low = 1, high = findmax(piles);

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            int total_hour = calculatetotalhours(piles, mid);

            if (total_hour <= h)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
    }
};

int main()
{
    int n, h;
    cin >> n >> h;

    vector<int> piles(n);
    for (int &i : piles)
    {
        cin >> i;
    }

    Solution s;
    cout << s.minEatingSpeed(piles, h);
}