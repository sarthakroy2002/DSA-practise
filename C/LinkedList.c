#include "headers/LinkedList.h"

//node
struct Node {
    int data;
    struct Node* next;
};

//create a node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

//insert at top
void push(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// pop the top element and add return it
int pop(struct Node** head) {
    if (*head == NULL) {
        printf("Stack is empty\n");
        exit(1);
    }
    struct Node* temp = *head;
    int data = temp->data;
    *head = temp->next;
    free(temp);
    return data;
}

// print the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}
