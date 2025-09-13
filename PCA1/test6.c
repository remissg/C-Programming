#include <stdio.h>
#define SIZE 5

int cq[SIZE], front = -1, rear = -1;

void enqueue(int val) {
    if ((rear + 1) % SIZE == front) {
        printf("Circular Queue Overflow! Cannot enqueue %d.\n", val);
        return;
    }
    if (front == -1)
        front = rear = 0;
    else
        rear = (rear + 1) % SIZE;
    cq[rear] = val;
    printf("Enqueued %d to the circular queue.\n", val);
}

int dequeue() {
    if (front == -1) {
        printf("Circular Queue Underflow! Cannot dequeue.\n");
        return -1;
    }
    int val = cq[front];
    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % SIZE;
    printf("Dequeued %d from the circular queue.\n", val);
    return val;
}

void display() {
    if (front == -1) {
        printf("Circular Queue is empty.\n");
        return;
    }
    printf("Current Circular Queue (front to rear): ");
    int i = front;
    while (1) {
        printf("%d ", cq[i]);
        if (i == rear) break;
        i = (i + 1) % SIZE;
    }
    printf("\n\n");
}

int main() {
    printf("=== Circular Queue Operations ===\n\n");

    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();

    display();

    enqueue(40);
    enqueue(50);

    display();

    enqueue(60); // Should show overflow

    dequeue();
    dequeue();
    dequeue();
    dequeue(); // Should show underflow

    display();

    return 0;
}