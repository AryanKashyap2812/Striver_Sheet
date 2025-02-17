#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string grade(int n)
    {
        if (n < 25)
        {
            return "Fail";
        }
        else if ( n <= 80)
        {
            return "Grade is B";
        }
        else
        {
            return "Grade is A";
        }
    }
};

int main()
{
    int n;
    cin >> n;
    Solution sl;
    cout << sl.grade(n);
    return 0;
}