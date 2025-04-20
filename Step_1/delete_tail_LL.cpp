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

Node *deletetail(Node *head)
{
    if (head == NULL || head->next == NULL) // if the LL is empty or it has only one element present
        return NULL;
        
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;

    return head;
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

    vector<int> v(n);
    for (int &i : v)
    {
        cin >> i;
    }
    Node *head = convertarr2LL(v);
    Node *nhead = deletetail(head);

    display(nhead);
}