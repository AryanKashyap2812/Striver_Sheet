#include <bits/stdc++.h>
using namespace std;

void explain_list()
{
    list<int> ls;       // a doubly linked list is maintained for list so it is more time consuming than vector
    ls.push_back(2);    // {2}
    ls.emplace_back(4); //{2,4}
    ls.push_front(5);   //{5,2,4}
}