#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    string compare(int n)
    {
        if (n >= 18)
        {
            return "Adult";
        }
        else
        {
            return "Not an Adult";
        }
    }
};

int main()
{
    int n;
    cin >> n;
    solution s;
    cout << s.compare(n);
    return 0;
}