#include <stdio.h>

// Function for Linear Search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return index if found
        }
    }
    return -1; // Not found
}

// Function for Binary Search 
int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            return mid; // Found
        } else if (arr[mid] < target) {
            low = mid + 1; // Search right half
        } else {
            high = mid - 1; // Search left half
        }
    }
    return -1; // Not found
}

int main() {
    int arr[100], idx[100], n, choice, target, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        idx[i] = i; // Store original indices
    }

    printf("\nChoose Search Method:\n");
    printf("1. Linear Search\n");
    printf("2. Binary Search (array will be sorted)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter element to search: ");
        scanf("%d", &target);
        result = linearSearch(arr, n, target);
        if (result != -1) {
            printf("Element %d found at index %d.\n", target, result);
        } else {
            printf("Element %d not found in the array.\n", target);
        }
    } else if (choice == 2) {
        // Sorting the array and keep track of original indices
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    // Swap indices as well
                    int tempIdx = idx[j];
                    idx[j] = idx[j + 1];
                    idx[j + 1] = tempIdx;
                }
            }
        }
        // Printing the sorted array before searching
        printf("Sorted array: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        printf("Enter element to search: ");
        scanf("%d", &target);

        result = binarySearch(arr, n, target);
        if (result != -1) {
            printf("Element %d found at original index %d.\n", target, idx[result]);
        } else {
            printf("Element %d not found in the array.\n", target);
        }
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}