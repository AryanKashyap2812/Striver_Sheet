#include "bits/stdc++.h"
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

class queue_LL
{
private:
    node *start = nullptr;
    node *end = nullptr;
    int qe_size = 0;

public:
    void push(int x)
    {
        node *temp = new node(x, nullptr);
        if (start == NULL)
        {
            start = end = temp;
        }
        else
            end->next = temp;

        qe_size += 1;
    }

    int pop()
    {
        if (start == NULL)
            return -1;

        node *temp = start;
        int x = temp->data;
        start = start->next;
        delete temp;
        qe_size -= 1;

        return x;
    }

    int peek()
    {
        if (start == NULL)
            return -1;

        return start->data;
    }

    int size()
    {
        return qe_size;
    }
};

int main()
{
    queue_LL s;
}