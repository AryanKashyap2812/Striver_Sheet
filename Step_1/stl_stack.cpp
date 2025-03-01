#include <bits/stdc++.h>
using namespace std;

void explain_stack()
{
    stack<int> st;
    st.push(4);     //{4}
    st.push(3);     // {3,4}
    st.emplace(31); //{31,3,4}

    st.top();   // returns 31
    st.pop();   //{3,4}
    st.top();   // 3
    st.size();  // 2
    st.empty(); // false
}