#include <bits/stdc++.h>
using namespace std;

void explain_set() // stores only unique elements and that too only in sorted manner
{
    set<int> st;
    st.insert(4);  // {4}
    st.insert(6);  //{4,6}
    st.emplace(3); //{3,4,6}

    //{2,6,7,8,9}

    auto it = st.find(7); // here "it" is an iterator which points on the location of 7
    auto it = st.find(6); // since 6 is not present in the set so "it" will point on the location just after last element i.e 9
    st.erase(8);          // erases 8 // take logarithmic time

    auto it = st.find(6);
    st.erase(it); // it takes constant time
}
