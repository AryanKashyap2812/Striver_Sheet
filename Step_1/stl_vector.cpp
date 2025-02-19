#include <bits/stdc++.h>
using namespace std;

void explainVector() // vector is dynamic in nature
{
    vector<int> v; // declaring a vector with int as data type

    v.push_back(1);    // pushing an element at the back of a vector
    v.emplace_back(2); // pushing an element at the back of a vector

    vector<pair<int, int>> v2; // declaring a vector with pair as data type

    v2.push_back({2, 3});  // pushing a pair of elements into the vector from back
    v2.emplace_back(1, 2); // pushing a pair of elements into the vector  from back

    vector<int> v3(5, 100); // creating a vector of size 5 which stores 100 five times

    vector<int> v4(5); // creating a vector of size 5 which stores 0 or any garbage value five times

    vector<int> v5(2, 10); // creating a vector of size 2 which stores 10 two times
    vector<int> v6(v5);    // creating a copy of v5 and storing it in v6

    vector<int>::iterator it = v.begin(); // iterator points to the memory where 1st element is located

    it++;
    cout << *(it) << " "; //  * is used to print the value that is stored in 'it' variable

    it = it + 2;
    cout << *(it) << " "; // * is used to print the value that is stored in 'it' variable

    vector<int>::iterator it = v.end(); // iterator points to the memory just next to where last element is located

     cout << v[0]; // prints the first element of the vector

    cout << v.back() << " "; // prints the last element of the vector
}