#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

public:
    node(int data1, node *next1)
    {
        data = data1;
        next = next1;
    }
};

class stack_impl
{
private:
    node *top = nullptr;
    int st_size = 0;

public:
    void push(int x)
    {
        node *temp = new node(x, nullptr);
        temp->next = top;
        top = temp;
        st_size += 1;
    }

    int pop()
    {
        node *temp = top;
        int x = temp->data;
        top = top->next;
        delete temp;
        st_size -= 1;

        return x;
    }

    int peek()
    {
        return top->data;
    }

    int size()
    {
        return st_size;
    }
};

int main()
{
    stack_impl s;
}