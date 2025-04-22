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
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

Node *inserttail(Node *head, int val)
{
    if (head == NULL)
    {
        return new Node(val, nullptr);
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *newnode = new Node(val, nullptr);
    temp->next = newnode;

    return head;
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

    int val;
    cin >> val;

    vector<int> v(n);
    for (int &i : v)
    {
        cin >> i;
    }

    Node *head = convertarr2LL(v);
    head = inserttail(head, val);
    display(head);
}
