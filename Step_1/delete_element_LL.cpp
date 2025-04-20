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

Node *removeelement(Node *head, int k)
{
    if (head == NULL)
        return head;

    if (head->data == k)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL)
    {
        if (temp->data == k)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }

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

    int k;
    cin >> k;

    vector<int> v(n);
    for (int &i : v)
    {
        cin >> i;
    }

    Node *head = convertarr2LL(v);
    Node *nhead = removeelement(head, k);
    display(nhead);
}