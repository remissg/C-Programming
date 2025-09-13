#include <stdio.h>
#define SIZE 5

int q1[SIZE], q2[SIZE];
int f1 = -1, r1 = -1;
int f2 = -1, r2 = -1;

void enqueue1(int val) {
    if (r1 == SIZE - 1) {
        printf("Queue1 Overflow! Cannot enqueue %d.\n", val);
        return;
    }
    if (f1 == -1) f1 = 0;
    q1[++r1] = val;
    printf("Enqueued %d to Queue1.\n", val);
}

void enqueue2(int val) {
    if (r2 == SIZE - 1) {
        printf("Queue2 Overflow! Cannot enqueue %d.\n", val);
        return;
    }
    if (f2 == -1) f2 = 0;
    q2[++r2] = val;
    printf("Enqueued %d to Queue2.\n", val);
}

int dequeue1() {
    if (f1 == -1 || f1 > r1) {
        printf("Queue1 Underflow! Cannot dequeue.\n");
        return -1;
    }
    int val = q1[f1++];
    printf("Dequeued %d from Queue1.\n", val);
    return val;
}

int dequeue2() {
    if (f2 == -1 || f2 > r2) {
        printf("Queue2 Underflow! Cannot dequeue.\n");
        return -1;
    }
    int val = q2[f2++];
    printf("Dequeued %d from Queue2.\n", val);
    return val;
}

void displayQueues() {
    printf("Queue1 (front to rear): ");
    if (f1 == -1 || f1 > r1) {
        printf("Empty");
    } else {
        for (int i = f1; i <= r1; i++)
            printf("%d ", q1[i]);
    }
    printf("\n");

    printf("Queue2 (front to rear): ");
    if (f2 == -1 || f2 > r2) {
        printf("Empty");
    } else {
        for (int i = f2; i <= r2; i++)
            printf("%d ", q2[i]);
    }
    printf("\n\n");
}

int main() {
    printf("=== Two Queues In One Program ===\n\n");

    enqueue1(11);
    enqueue1(22);
    enqueue2(33);
    enqueue2(44);

    displayQueues();

    dequeue1();
    dequeue2();

    displayQueues();

    // Try underflow
    dequeue1();
    dequeue1();
    dequeue1();

    dequeue2();
    dequeue2();
    dequeue2();

    displayQueues();

    return 0;
}