#include <stdio.h>
#include <stdlib.h>

// Node structure for linked list
struct Node {
    int data;
    struct Node* next;
};

// Create a new node with given value
struct Node* create(int val) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = val;
    temp->next = NULL;
    return temp;
}

// Merge two sorted linked lists
struct Node* merge(struct Node* a, struct Node* b) {
    if (!a) return b;
    if (!b) return a;

    if (a->data < b->data) {
        a->next = merge(a->next, b);
        return a;
    } else {
        b->next = merge(a, b->next);
        return b;
    }
}

// Print the linked list
void printList(const char* msg, struct Node* head) {
    printf("%s", msg);
    if (!head) {
        printf("Empty\n");
        return;
    }
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    printf("=== Merging Two Sorted Linked Lists ===\n\n");

    // Create first sorted linked list: 1 -> 3 -> 5
    struct Node* a = create(1);
    a->next = create(3);
    a->next->next = create(5);

    // Create second sorted linked list: 2 -> 4 -> 6
    struct Node* b = create(2);
    b->next = create(4);
    b->next->next = create(6);

    printList("List A: ", a);
    printList("List B: ", b);

    struct Node* result = merge(a, b);

    printList("\nMerged List: ", result);

    return 0;
}