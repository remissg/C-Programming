#include <stdio.h>
#define SIZE 5

// Stack array and top pointer
int stack[SIZE];
int top = -1;

// Push operation: adds an element to the top of the stack
void push(int val) {
    if (top == SIZE - 1) {
        printf("Stack Overflow: Cannot push %d\n", val);
        return;
    }
    stack[++top] = val;
    printf("Pushed: %d\n", val);
}

// Pop operation: removes and returns the top element
int pop() {
    if (top == -1) {
        printf("Stack Underflow: Nothing to pop\n");
        return -1;
    }
    int popped = stack[top--];
    printf("Popped: %d\n", popped);
    return popped;
}

// Peek operation: returns the top element without removing it
int peek() {
    if (top == -1) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top];
}

// Display operation: prints the stack from top to bottom
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }

    printf("\nStack contents : ");
    for (int i = top; i >= 0; i--) {
        printf("%d ",stack[i]);
    }
    printf("\n");
}

int main() {
    // Sample stack operations
    push(10);
    push(20);
    push(30);
    display();

    // Peek before popping
    printf("Top element (peek): %d\n", peek());

    // Pop operation
    pop();

    // Peek after popping
    printf("Top element after pop (peek): %d\n", peek());
    display();

    return 0;
}