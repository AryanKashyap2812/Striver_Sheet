#include <bits/stdc++.h>
using namespace std;

struct Node
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

Node *convertArr2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0], nullptr);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

int searchLinkedList(Node *head, int val)
{
    Node *temp = head;

    while (temp)
    {
        if (temp->data == val)
            return 1;
        temp = temp->next;
    }

    return 0;
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

    Node *head = convertArr2LL(v);

    cout << searchLinkedList(head, val);
}