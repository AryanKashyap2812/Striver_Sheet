#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // char arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // int hash [26]={0};
    // for(int i=0;i<26;i++){
    //     hash[]
    // }

    // OPTIMAL APPROACH 1
    // string s;
    // cin >> s;

    // int hash[26] = {0};
    // for (int i = 0; i < s.size(); i++)
    // {
    //     hash[s[i] - 'a']++;
    // }

    // int q;
    // cin >> q;

    // while (q--)
    // {
    //     char c;
    //     cout << hash[c - 'a'];
    // }

    string s;
    cin >> s;

    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }

    int q;
    cin >> q;

    while (q--)
    {
        char c;
        cout << hash[c];
    }

    return 0;
}