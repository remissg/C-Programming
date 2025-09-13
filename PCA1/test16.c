#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void push(struct Node** top, int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Stack Overflow\n");
        return;
    }
    
    newNode->data = val;
    newNode->next = *top;
    *top = newNode;
    printf("Pushed %d onto the stack.\n", val);
}

int pop(struct Node** top) {
    if (*top == NULL) {
        printf("Stack Underflow\n");
        return -1;
    }
    
    struct Node* temp = *top;
    int val = temp->data;
    *top = temp->next;
    free(temp);
    
    printf("Popped %d from the stack.\n", val);
    return val;
}

int peek(struct Node* top) {
    if (top == NULL) {
        printf("Stack is empty.\n");
        return -1;
    }
    return top->data;
}

void display(struct Node* top) {
    printf("Stack: ");
    while (top != NULL) {
        printf("%d ", top->data);
        top = top->next;
    }
    printf("\n\n");
}

int main() {
    printf("=== Linked List Stack ===\n\n");
    struct Node* stack = NULL;

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    
    display(stack);

    printf("Top element: %d\n\n", peek(stack));
    
    pop(&stack);
    display(stack);

    push(&stack, 40);
    display(stack);

    return 0;
}
