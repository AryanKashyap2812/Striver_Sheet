#include <bits/stdc++.h>
using namespace std;

class queue_implementation
{
private:
    int *arr;
    int capacity;
    int current_size;
    int start;
    int end;

public:
    queue_implementation(int n)
    {
        capacity = n;
        arr = new int[capacity];
        current_size = 0;
        start = -1;
        end = -1;
    }

    void push(int x)
    {
        if (current_size == capacity)
        {
            cout << "queue overflow" << endl;
            return;
        }
        else if (current_size == 0)
        {
            start = 0, end = 0;
            arr[end] = x;
            current_size = 1;
        }
        else
        {
            end = (end + 1) % capacity;
            arr[end] = x;
            current_size += 1;
        }
    }

    int pop()
    {
        if (current_size == 0)
            return -1;

        int x = arr[start];

        if (current_size == 1)
        {
            start = end = -1;
        }
        else
        {
            start = (start + 1) % capacity;
        }

        current_size -= 1;

        return x;
    }

    int peek()
    {
        if (current_size == 0)
            return -1;
        return arr[start];
    }

    int size()
    {
        return current_size;
    }
};

int main()
{
    int n;
    cin >> n;

    queue_implementation s(n);
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