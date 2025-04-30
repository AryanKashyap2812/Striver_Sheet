#include <bits/stdc++.h>
using namespace std;

class stack_implementation
{
private: // private keyword is optional as without it also the data members will be treated
         // as private only
    int *arr;
    int top;
    int capacity;

public:
    stack_implementation(int size)
    {
        capacity = size;
        top = -1;
        arr = new int[capacity];
    }

    void push(int x)
    {
        if ((top + 1) == capacity)
        {
            cout << "stack overflow" << endl;
            return;
        }
        else
        {
            top = top + 1;
            arr[top] = x;
        }
    }

    int pop()
    {
        if (top == -1)
        {
            cout << "stack underflow" << endl;
            return -1;
        }
        else
        {
            int x = arr[top];
            top--;
            return x;
        }
    }

    int peek()
    {
        if (top == -1)
        {
            cout << "stack is empty" << endl;
            return -1;
        }

        return arr[top];
    }

    int size()
    {
        return top + 1;
    }
};

int main()
{
    int n;
    cin >> n;

    stack_implementation s(n);
    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;
        s.push(val);
    }

    s.peek();
    s.pop();
    s.pop();
    s.size();
}