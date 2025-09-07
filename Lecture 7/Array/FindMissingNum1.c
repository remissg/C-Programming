#include <stdio.h>
#include <conio.h>  // Optional for getch()

void main() {
    int i, n, sum = 0, missing;

    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Invalid input! Size should be greater than 1.\n");
        return;
    }

    int arr[n - 1];
    printf("Please enter %d numbers (from 1 to %d, with one missing):\n", n - 1, n);

    for (i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    missing = (n * (n + 1)) / 2 - sum;
    printf("Missing number is = %d\n", missing);

    getch();  // Optional
}