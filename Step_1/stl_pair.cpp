#include <bits/stdc++.h>
using namespace std;

void explainPair()
{
    pair<int, int> p1 = {1, 3};

    cout << p1.first << " " << p1.second;

    pair<int, pair<int, int>> p = {3, {4, 6}};

    cout << p.first << " " << p.second.first << " " << p.second.second << " ";

    pair<int, int> arr[] = {{1, 2}, {4, 6}, {7, 3}};

    cout << arr[1].second;
}

int main()
{
    explainPair();
    return 0;
}