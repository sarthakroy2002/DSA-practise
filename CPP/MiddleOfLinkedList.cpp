#include <bits/stdc++.h>
using namespace std;

// creating class of node
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// creating function to insert a element at head
void InsertAtTail(Node *&tail, int NewData)
{
    // create new Node which become Inserted on Tail Node
    Node *NewNode = new Node(NewData);

    // Link next of  tail Node to NULL

    tail->next = NewNode;
    tail = NewNode;
}

// Function to find middle of a linked list
Node *MiddleOfList(Node *head)
{
    // find count of Node first
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    int t = count / 2;
    Node *itrate = head;
    while (t--)
    {
        itrate = itrate->next;
    }
    return itrate;
}

int main()
{
    // Dynamically create A node
    Node *Node1 = new Node(100);
    Node *head = Node1;
    Node *tail = Node1;

    InsertAtTail(tail, 67);
    InsertAtTail(tail, 14);
    InsertAtTail(tail, 14);
    InsertAtTail(tail, 33);
    InsertAtTail(tail, 23);

    //
    Node *ans = MiddleOfList(head);
    cout << "Mid Node: "<< ans->data << endl;
}
