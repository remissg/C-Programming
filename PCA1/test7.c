#include <stdio.h>
#define SIZE 10

int arr[SIZE];
int top1 = -1;
int top2 = SIZE;

void push1(int val) {
    if (top1 + 1 == top2) {
        printf("Stack Overflow! Cannot push %d to Stack1.\n", val);
        return;
    }
    arr[++top1] = val;
    printf("Pushed %d to Stack1.\n", val);
}

void push2(int val) {
    if (top2 - 1 == top1) {
        printf("Stack Overflow! Cannot push %d to Stack2.\n", val);
        return;
    }
    arr[--top2] = val;
    printf("Pushed %d to Stack2.\n", val);
}

int pop1() {
    if (top1 == -1) {
        printf("Stack1 Underflow! Cannot pop.\n");
        return -1;
    }
    int val = arr[top1--];
    printf("Popped %d from Stack1.\n", val);
    return val;
}

int pop2() {
    if (top2 == SIZE) {
        printf("Stack2 Underflow! Cannot pop.\n\n");
        return -1;
    }
    int val = arr[top2++];
    printf("Popped %d from Stack2.\n", val);
    return val;
}

void displayStacks() {
    printf("Stack1 (bottom to top): ");
    if (top1 == -1) {
        printf("Empty");
    } else {
        for (int i = 0; i <= top1; i++)
            printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Stack2 (bottom to top): ");
    if (top2 == SIZE) {
        printf("Empty");
    } else {
        for (int i = SIZE - 1; i >= top2; i--)
            printf("%d ", arr[i]);
    }
    printf("\n\n");
}

int main() {
    printf("=== Two Stacks in One Array ===\n\n");

    push1(10);
    push1(20);
    push2(100);
    push2(200);

    displayStacks();

    pop1();
    pop2();

    displayStacks();

    // Try underflow
    pop1();
    pop1();
    pop1();

    pop2();
    pop2();

    displayStacks();

    return 0;
}