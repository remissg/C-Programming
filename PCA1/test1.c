#include <stdio.h>
#define SIZE 100

int arr[SIZE], n = 0;

// Insert value at a given position
void insert(int value, int position) {
    if (position < 0 || position > n) {
        printf("Invalid position for insertion!\n");
        return;
    }
    for (int i = n; i > position; i--)
        arr[i] = arr[i - 1];
    arr[position] = value;
    n++;
    printf("Inserted %d at position %d.\n", value, position);
}

// Delete value from a given position
void delete(int position) {
    if (position < 0 || position >= n) {
        printf("Invalid position for deletion!\n");
        return;
    }
    printf("Deleted %d from position %d.\n", arr[position], position);
    for (int i = position; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;
}

// Display the array elements
void traverse() {
    printf("Current Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n\n");
}

int main() {
    printf("Array Operations Demo : \n");
    printf("\n");

    insert(10, 0);
    insert(20, 1);
    insert(30, 2);
    traverse();

    delete(1);
    traverse();

    insert(25, 1);
    traverse();

    return 0;
}