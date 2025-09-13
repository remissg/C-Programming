#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

// Push operation
void push(int value) {
    if (top >= MAX - 1) {
        printf("Stack Overflow! Cannot push %d.\n", value);
        return;
    }
    stack[++top] = value;
    printf("Pushed %d onto the stack.\n", value);
}

// Pop operation
void pop() {
    if (top < 0) {
        printf("Stack Underflow! Cannot pop.\n");
        return;
    }
    printf("Popped %d from the stack.\n", stack[top--]);
}

// Peek operation
void peek() {
    if (top < 0) {
        printf("Stack is empty. Nothing to peek.\n");
        return;
    }
    printf("Top element is %d.\n", stack[top]);
}

// Display operation
void display() {
    if (top < 0) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements (top to bottom): ");
    for (int i = top; i >= 0; i--)
        printf("%d ", stack[i]);
    printf("\n\n");
}

int main() {
    printf("=== Stack Operations ===\n\n");

    // Push operations
    push(10);
    push(20);
    push(30);

    // Display stack
    display();

    // Peek top element
    peek();

    // Pop operation
    pop();

    // Display stack after pop
    display();

    // Peek top element after pop
    peek();

    // Pop all elements
    pop();
    pop();

    // Try to pop from empty stack
    pop();

    // Display empty stack
    display();

    return 0;
}