#ifndef LinkedList.h
#define LinkedList.h

#include <stdio.h>
#include <stdlib.h>

//node
struct Node;

//create a node
struct Node* createNode(int data);

// insert at top
void push(struct Node** head, int data);

//pop the top element and add return it
int pop(struct Node** head);

//print the linked list
void printList(struct Node* head);

#endif
