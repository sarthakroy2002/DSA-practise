// Input: head = [1,2,3,4,5], n = 2

// Output: [1,2,3,5]

#include <iostream>
using namespace std;

// Node Class for LinkedList
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

Node *removeNthFromEnd(Node *head, int n)
{
    Node *start = new Node(0);
    start->next = head;
    Node *fast = start;
    Node *slow = start;

    for (int i = 1; i <= n; ++i)
        fast = fast->next;

    while (fast->next != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }

    slow->next = slow->next->next;

    return start->next;
}

// Input taking Function
Node *takeinput()
{
    // Taking first value for creating and also for head node
    int data;
    cin >> data;

    Node *head = NULL, *tail = NULL;

    // Running a loop till user doesn't gives -1 as input
    while (data != -1)
    {
        // Creating Head node
        Node *newNode = new Node(data);

        // Checking if head is null(showing if the linked list is present or not) if not then create it
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }

        // Else there is a head node then start using tail as traversal and attaching new node which is created
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        // Again taking input for next node which will be attached to the list or terminating the LL if provided -1
        cin >> data;
    }
    // Now returning head for providing the LL
    return head;
}

// Print Function
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

// Driver Code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Node *head = takeinput();
        Node *temp = removeNthFromEnd(head, n);
        print(temp);
    }
    return 0;
}
