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

bool hascycle(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            return true;
        }
    }

    return false;
}

Node *convertarrLL(vector<int> &v)
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

    Node *head = convertarrLL(v);
    
    if (hascycle(head))
    {
        cout << "true" << " ";
    }
    else
        cout << "false" << " ";
}