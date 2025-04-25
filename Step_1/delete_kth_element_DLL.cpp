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

node *remove_head(node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
        return NULL;

    node *prev = head;
    head = head->next;

    head->back = nullptr;
    prev->next = nullptr;

    delete prev;
    return head;
}

node *deletek(node *head, int k)
{

    if (head == NULL)
        return NULL;

    node *temp = head;
    int c = 0;

    while (temp != NULL)
    {
        c++;
        if (c == k)
        {
            break;
        }
        temp = temp->next;
    }

    node *prev = temp->back;
    node *front = temp->next;

    if (prev == NULL && front == NULL)
    {

        return NULL;
    }

    else if (prev == NULL)
    {
        return remove_head(head);
    }

    else if (front == NULL)
    {
        return remove_tail(head);
    }

    else
    {
        prev->next = front;
        front->back = prev;

        temp->next = nullptr;
        temp->back = nullptr;

        free(temp);

        return head;
    }
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

    int k;
    cin >> k;

    vector<int> v(n);
    for (int &i : v)
    {
        cin >> i;
    }

    node *head = convertarr2DLL(v);
    head = deletek(head, k);
    display(head);
}