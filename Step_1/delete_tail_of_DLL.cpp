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

node *remove_tail(node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;

    node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }

    node *prev = tail->back;
    prev->next = nullptr;
    tail->back = nullptr;

    delete (tail);

    return head;
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

    vector<int> v(n);
    for (int &i : v)
    {
        cin >> i;
    }

    node *head = convertarr2DLL(v);
    head=remove_tail(head);
    display(head);
}