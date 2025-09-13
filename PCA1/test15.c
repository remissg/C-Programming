#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertEnd(struct Node** head, int val) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = val;
    temp->next = NULL;
    if (*head == NULL) {
        *head = temp;
        printf("Inserted %d at the end (first node).\n", val);
        return;
    }
    struct Node* curr = *head;
    while (curr->next != NULL)
        curr = curr->next;
    curr->next = temp;
    printf("Inserted %d at the end.\n", val);
}

void reverse(struct Node** head) {
    struct Node *prev = NULL, *curr = *head, *next = NULL;
    //  Reversing the linked list
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head = prev;
    //  Linked list reversed!
}

void display(struct Node* head) {
    printf("Linked List: ");
    if (head == NULL) {
        printf("Empty\n");
        return;
    }
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    printf("=== Linked List Reverse ===\n\n");
    struct Node* head = NULL;

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);

    printf("\nOriginal ");
    display(head);

    reverse(&head);

    printf("\nReversed ");
    display(head);

    return 0;
}