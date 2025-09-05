#include <stdio.h>

// Function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Function to print the first 'n' Fibonacci numbers
void print_fibonacci(int n) {
    printf("First %d Fibonacci numbers: ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n > 0) {
        print_fibonacci(n);
    } else {
        printf("Please enter a positive integer.\n");
    }

    return 0;
}
