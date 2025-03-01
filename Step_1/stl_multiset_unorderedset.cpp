#include <bits/stdc++.h>
using namespace std;

void explain_multiset() // stores duplicate items also but in sorted order
{
    multiset<int> ms;
    ms.insert(4); //{4}
    ms.insert(4); //{4,4}
    ms.insert(4); //{4,4}

    ms.erase(4);          // all 4's erased
    ms.erase(ms.find(4)); // only a single 4 is erased
}

void explain_unorderedset() // stores only unique items but randomly // time complexity is O(1)
{
    unordered_set<int> st;
}