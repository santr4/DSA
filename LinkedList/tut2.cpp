// ** code to convert array to linkedlist and also to tranverse and find the length of the linkedlist.

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

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *convertArr2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int lengthOfLL(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

int main()
{
    vector<int> arr = {2, 5, 8, 7};
    Node *head1 = convertArr2LL(arr);
    cout << head1->data << endl;
    cout << head1->next->data << endl;

    cout << lengthOfLL(head1) << endl;
    return 0;
}