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

Node *insertk(Node *head, int val, int k)
{
    if (head == NULL)
    {
        if (k == 1)
            return new Node(val, nullptr);
        else
            return NULL;
    }

    if (k == 1)
    {
        Node *temp = new Node(val, head);
        return temp;
    }

    int c = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        c++;

        if (c == (k - 1))
        {
            Node *x = new Node(val, nullptr);
            x->next = temp->next;
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
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

    int k;
    cin >> k;

    vector<int> v(n);
    for (int &i : v)
    {
        cin >> i;
    }

    Node *head = convertarr2LL(v);
    head = insertk(head, val, k);
    display(head);
}