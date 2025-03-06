#include <bits/stdc++.h>
using namespace std;

int c = 0;
class Solution
{
public:
    void printNos(int n)
    {
        if (c >= n)
            return;
        c++;
        cout << c << " ";
        printNos(n);
    }
};

// Code by chatgpt with no global variable

// class Solution
// {
// public:
//     void printNos(int n)
//     {
//         if (n == 0) // Base case
//             return;
//         printNos(n - 1); // Recursive call
//         cout << n << " "; // Print after recursive call for 1 to n order
//     }
// };

int main()
{
    int n;
    cin >> n;
    Solution s;
    s.printNos(n);
    return 0;
}
