#include <stdio.h>

// Merge two sorted arrays into result[]
void merge(int a[], int b[], int n1, int n2, int result[]) {
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            result[k++] = a[i++];
        } else {
            result[k++] = b[j++];
        }
    }
    while (i < n1) {
        result[k++] = a[i++];
    }
    while (j < n2) {
        result[k++] = b[j++];
    }
}

void displayArray(const char* msg, int arr[], int size) {
    printf("%s", msg);
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int a[] = {1, 3, 5};
    int b[] = {2, 4, 6};
    int result[6];

    printf("=== Merge Two Sorted Arrays ===\n");
    displayArray("Array A: ", a, 3);
    displayArray("Array B: ", b, 3);
    printf("\n");

    merge(a, b, 3, 3, result);

    displayArray("Merged Array: ", result, 6);
    return 0;
}