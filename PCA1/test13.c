#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertFront(struct Node** head, int val) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = val;
    temp->next = *head;
    *head = temp;
    printf("Inserted %d at the front.\n", val);
}

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

void insertPos(struct Node** head, int val, int pos) {
    if (pos == 0) {
        insertFront(head, val);
        return;
    }
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = val;
    struct Node* curr = *head;
    for (int i = 0; i < pos - 1 && curr != NULL; i++)
        curr = curr->next;
    if (curr == NULL) {
        printf("Position %d is out of bounds. Insertion failed.\n", pos);
        free(temp);
        return;
    }
    temp->next = curr->next;
    curr->next = temp;
    printf("Inserted %d at position %d.\n", val, pos);
}

void display(struct Node* head) {
    printf("\nCurrent Linked List: ");
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
    printf("=== Linked List Insert Operations ===\n\n");
    struct Node* head = NULL;

    insertEnd(&head, 10);
    insertFront(&head, 5);
    insertPos(&head, 7, 1);

    display(head);

    return 0;
}