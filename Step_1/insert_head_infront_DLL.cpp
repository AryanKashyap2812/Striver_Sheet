#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *back;

public:
    node(int data1, node *next1, node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }
};

void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

node *inserthead(node *head, int val)
{
    node *newhead = new node(val, head, nullptr);
    head->back = newhead;

    return newhead;
}

node *convertarr2DLL(vector<int> &v)
{
    node *head = new node(v[0], nullptr, nullptr);
    node *prev = head;

    for (int i = 1; i < v.size(); i++)
    {
        node *temp = new node(v[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }

    return head;
}

int main()
{
    int n;
    cin >> n;

    int val;
    cin >> val;

    vector<int> v(n);
    for (int &i : v)
    {
        cin >> i;
    }

    node *head = convertarr2DLL(v);
    head = inserthead(head, val);
    display(head);
}