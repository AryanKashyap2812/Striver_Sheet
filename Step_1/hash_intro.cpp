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

    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q; // user inputs q number of numbers

    while (q--)
    {
        int number; // those q number are inputed by user one by one in this loop
        cin >> number;
        cout << hash[number] << endl; // frequency of each input number is printed
    }

    return 0;
}
