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

void display(Node *nhead)
{
    while (nhead != NULL)
    {
        cout << nhead->data << " ";
        nhead = nhead->next;
    }
}

Node *insertnode(Node *head, int val)
{
    Node *temp = new Node(val,head);
    return temp;
}

Node *convertarr2LL(vector<int> &v)
{
    Node *head = new Node(v[0], nullptr);
    Node *mover = head;

    for (int i = 1; i < v.size(); i++)
    {
        Node *temp = new Node(v[i], nullptr);
        mover->next = temp;
        mover = temp;
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
    Node *nhead = insertnode(head, val);
    display(nhead);
}