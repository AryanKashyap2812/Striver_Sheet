#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
};

void display(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node *reverseLL(Node *head)
{
    Node *temp = head;
    Node *prev = NULL;

    while (temp != NULL)
    {
        Node *front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }

    return prev;
}

Node *convertarr2LL(vector<int> &v)
{
    Node *head = new Node(v[0], nullptr);
    Node *m = head;

    for (int i = 1; i < v.size(); i++)
    {
        Node *temp = new Node(v[i], nullptr);
        m->next = temp;
        m = temp;
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

    Node *head = convertarr2LL(v);
    head = reverseLL(head);
    display(head);
}