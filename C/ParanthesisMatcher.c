#include "headers/LinkedList.h"


// to check balancedcd
int isBalanced(const char* expression) {
    struct Node* stack = NULL;
    char c;

    for (int i = 0; expression[i] != '\0'; i++) {
        c = expression[i];
        if (c == '(' || c == '[' || c == '{') {
            push(&stack, c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (stack == NULL) {
                return 0; 
            }

            char popped = pop(&stack);
            //not matching
            if ((c == ')' && popped != '(') ||
                (c == ']' && popped != '[') ||
                (c == '}' && popped != '{')) {
                return 0; 
            }
        }
    }

    //check empty stack
    return stack == NULL ? 1 : 0; 
}

int main() {
    const char* expression = "(()))"; //expression not balanced

    if (isBalanced(expression)) {
        printf("The parentheses are balanced.\n");
    } else {
        printf("The parentheses are not balanced.\n");
    }

    return 0;
}