#include "bits/stdc++.h"
using namespace std;

class st
{
    queue<int> q;

public:
    void push(int x)
    {
        int s = q.size();
        q.push(x);
        for (int i = 0; i < s; i++)
        {
            q.push(q.front()); //This line makes a copy of the first element of the queue and puts the copy to the last 
            q.pop(); // This line now pops out the first element from the queue but don't worry that first element is already at last of the queue making the second element the new first element and the process will continue.
        }
    }

    int pop()
    {
        int top = q.front();
        q.pop();
        return top;
    }

    int peek()
    {
        return q.front();
    }

    int st_size()
    {
        return q.size();
    }
};

int main()
{
    st s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.peek() << endl;
    cout << s.pop() << endl;
    cout << s.peek() << endl;
    cout << s.st_size() << endl;
}