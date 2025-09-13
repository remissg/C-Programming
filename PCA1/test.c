#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    // Allocate memory for a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Error: Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the list
void insertAtBeginning(struct Node** head_ref, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head_ref;
    *head_ref = newNode;
    printf("Inserted %d at the beginning.\n", data);
}

// Function to insert a node at the end of the list
void insertAtEnd(struct Node** head_ref, int data) {
    struct Node* newNode = createNode(data);
    
    // If the list is empty, the new node becomes the head
    if (*head_ref == NULL) {
        *head_ref = newNode;
        printf("Inserted %d at the end (list was empty).\n", data);
        return;
    }
    
    // Traverse to the last node
    struct Node* last = *head_ref;
    while (last->next != NULL) {
        last = last->next;
    }
    
    // Change the next pointer of the last node
    last->next = newNode;
    printf("Inserted %d at the end.\n", data);
}

// Function to print the linked list
void printList(struct Node* node) {
    printf("Linked List: ");
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

// Function to free the memory of the linked list
void freeList(struct Node* head) {
    struct Node* current = head;
    struct Node* next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    printf("List memory freed.\n");
}

int main() {
    struct Node* head = NULL; // Initialize an empty list

    // Insert elements at the beginning
    insertAtBeginning(&head, 10);
    printList(head);
    insertAtBeginning(&head, 20);
    printList(head);

    // Insert elements at the end
    insertAtEnd(&head, 30);
    printList(head);
    insertAtEnd(&head, 40);
    printList(head);

    // Free the allocated memory
    freeList(head);

    return 0;
}
