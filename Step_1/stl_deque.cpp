#include <bits/stdc++.h>
using namespace std;

void explain_deque()
{
    deque<int> dq;
    dq.push_back(2);     // {2}
    dq.emplace_back(4);  //{2,4}
    dq.push_front(5);    //{5,2,4}
    dq.emplace_front(3); //{3,5,2,4}

    dq.pop_back();  //{3,5,2}
    dq.pop_front(); //{5,2}

    dq.back();
    dq.front();
}