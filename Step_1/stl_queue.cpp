#include <bits/stdc++.h>
using namespace std;

void explain_queue()
{
    queue<int> q;
    q.push(3);     //{3}
    q.push(4);     //{3,4}
    q.emplace(5);  //{3,4,5}
    q.back() += 6; // 5 becomes 11
    q.front();     // 3
    q.pop();       //{4,11}
}