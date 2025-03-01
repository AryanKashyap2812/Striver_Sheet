#include <bits/stdc++.h>
using namespace std;

void explain_map() // stores as a key-value pair // that too unique keys in sorted order
{
    map<int, int> mpp1; // first 'int' is for key and second one is for value
    map<int, pair<int, int>> mpp2;
    map<pair<int, int>, int> mpp3;

    mpp1[1] = 2;         // a container is build in which at key=1 position 2 is stored
    mpp1.insert({2, 4}); // in the same container at key=3 position 4 is stored
    mpp1.emplace(3, 7);
}