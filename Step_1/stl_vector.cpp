#include <bits/stdc++.h>
using namespace std;

void explainVector() // vector is dynamic in nature // a singly linked list is mainted for vector so it is less time consuming
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

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    for (auto it = v.begin(); it != v.end(); it++) // auto automatically defines the data type of the variable
    {
        cout << *(it) << " ";
    }

    //{10,20,30,40,50}

    v.erase(v.begin() + 1);                // will erase 20
    v.erase(v.begin() + 2, v.begin() + 4); // will erase 30,40 i.e [start,end)

    vector<int> v(2, 100);          //{100,100}
    v.insert(v.begin(), 300);       //{300,100,100}
    v.insert(v.begin() + 1, 2, 65); // here we have to insert 65 two times at (begin + 1) position so answer will be {300,65,65,100,100}

    //{10,20,30,40,50}

    cout << v.size(); // prints 5

    v.pop_back(); // deletes the last element and returns the remaining vector

    v.clear(); // clears the entire vector

    v.empty(); // tells whether a vector is empty or not
} 