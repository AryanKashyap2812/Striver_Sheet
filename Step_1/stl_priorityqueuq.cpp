#include <bits/stdc++.h>
using namespace std;

void explain_PQ()
{

    // maximum heap

    priority_queue<int> pq;
    pq.push(4);    //{4}
    pq.push(5);    //{5,4}
    pq.push(2);    //{5,4,2}
    pq.emplace(7); //{7,5,4,2}
    pq.top();      // returns 7

    // minimum heap

    priority_queue<int, vector<int>, greater<int>> pq1;

    pq.push(4);    //{4}
    pq.push(5);    //{4,5}
    pq.push(2);    //{2,4,5}
    pq.emplace(7); //{2,4,5,7}
    pq.top();      // returns 2
}