#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Enqueue operation
void enqueue(struct Node** front, struct Node** rear, int val) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    if (temp == NULL) {
        printf("Queue Overflow\n");
        return;
    }
    temp->data = val;
    temp->next = NULL;

    if (*rear == NULL) {
        *front = *rear = temp;
    } else {
        (*rear)->next = temp;
        *rear = temp;
    }
    printf("Enqueued %d\n", val);
}

// Dequeue operation
int dequeue(struct Node** front, struct Node** rear) {
    if (*front == NULL) {
        printf("Queue Underflow\n");
        return -1;
    }
    
    struct Node* temp = *front;
    int val = temp->data;
    *front = temp->next;
    
    if (*front == NULL) {
        *rear = NULL;
    }
    
    free(temp);
    return val;
}

// Display queue
void display(struct Node* front) {
    printf("Queue: ");
    while (front != NULL) {
        printf("%d ", front->data);
        front = front->next;
    }
    printf("\n\n");
}

int main() {
    printf("=== Linked List Queue Operation ===\n\n");
    struct Node* front = NULL;
    struct Node* rear = NULL;

    enqueue(&front, &rear, 10);
    enqueue(&front, &rear, 20);
    enqueue(&front, &rear, 30);
    
    display(front);

    printf("Dequeued: %d\n", dequeue(&front, &rear));
    
    display(front);

    enqueue(&front, &rear, 40);
    
    display(front);

    return 0;
}
