#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> mpp;  //storing and fetching time complexity -> O(log N)  
                        //for unordered map the time complexity is -> O(1)
                        //so in most of the case we use unordered map instead of map
                        //but in rare cases while using unordered map if TLE occurs then we use map only
                        // these TLE occurs due collisions 
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        cout << mpp[number];
    }

    return 0;
}