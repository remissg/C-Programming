#include <stdio.h>
#define SIZE 5

// Queue array and front/rear pointers
int queue[SIZE];
int front = -1, rear = -1;

// Enqueue operation: adds an element to the rear of the queue
void enqueue(int val) {
    if (rear == SIZE - 1) {
        printf("Queue Overflow: Cannot enqueue %d\n", val);
        return;
    }
    if (front == -1) front = 0;
    queue[++rear] = val;
    printf("Enqueued: %d\n", val);
}

// Dequeue operation: removes and returns the front element
int dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow: Nothing to dequeue\n");
        return -1;
    }
    int removed = queue[front++];
    printf("Dequeued: %d\n", removed);
    return removed;
}

// Display operation: prints the queue from front to rear
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
        return;
    }

    printf("\nQueue contents (Front to Rear) : ");
    for (int i = front; i <= rear; i++) {
        printf("%d ",queue[i]);
    }
    printf("\n");
}

int main() {
    // Sample queue operations
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    dequeue();
    display();

    enqueue(40);
    enqueue(50);
    display();

    dequeue();
    display();

    return 0;
}