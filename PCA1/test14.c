#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Insert at end
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

// Delete from front
void deleteFront(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty. Cannot delete from front.\n");
        return;
    }
    struct Node* temp = *head;
    *head = (*head)->next;
    printf("Deleted %d from the front.\n", temp->data);
    free(temp);
}

// Delete from end
void deleteEnd(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty. Cannot delete from end.\n");
        return;
    }
    struct Node* curr = *head;
    if (curr->next == NULL) {
        printf("Deleted %d from the end.\n", curr->data);
        free(curr);
        *head = NULL;
        return;
    }
    while (curr->next->next != NULL)
        curr = curr->next;
    printf("Deleted %d from the end.\n", curr->next->data);
    free(curr->next);
    curr->next = NULL;
}

// Delete from a given position
void deletePos(struct Node** head, int pos) {
    if (*head == NULL) {
        printf("List is empty. Cannot delete position %d.\n", pos);
        return;
    }
    if (pos == 0) {
        deleteFront(head);
        return;
    }
    struct Node* curr = *head;
    for (int i = 0; i < pos - 1 && curr->next != NULL; i++)
        curr = curr->next;
    if (curr->next == NULL) {
        printf("Position %d is out of bounds. Deletion failed.\n", pos);
        return;
    }
    struct Node* temp = curr->next;
    curr->next = temp->next;
    printf("Deleted %d from position %d.\n", temp->data, pos);
    free(temp);
}

// Display the linked list
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
    printf("=== Linked List Delete Operations ===\n\n");
    struct Node* head = NULL;

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    display(head);

    deleteFront(&head);
    display(head);

    deleteEnd(&head);
    display(head);

    insertEnd(&head, 40);
    insertEnd(&head, 50);
    deletePos(&head, 1);
    display(head);

    return 0;
}