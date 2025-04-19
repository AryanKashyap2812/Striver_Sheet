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

// THIS IS WRONG AS IT FINDS ONLY THE HEAD AND
// DOES NOT CONVERT THE ARRAY INTO LL THIS LENGTH CANNOT BE DETERMINED

// Node *findHead(vector<int> &arr)
// {
//     Node *head = new Node(arr[0], nullptr);
// }

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

int lengthofLL(Node *head)
{
    int c = 0;
    Node *temp = head;

    while (temp)
    {
        temp = temp->next;
        c++;
    }

    return c;
}

int main()
{
    vector<int> arr = {12, 8, 7, 5};
    Node *head = convertArr2LL(arr);
    cout << lengthofLL(head);
}