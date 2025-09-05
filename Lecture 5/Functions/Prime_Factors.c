#include <stdio.h>

// Function to check if a number is prime
int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// Function to find prime factors
void prime_factors(int n) {
    printf("Prime factors of %d are : ", n);
    for (int i = 2; i <= n; i++) {
        if (n % i == 0 && is_prime(i)) {
            while (n % i == 0) {
                printf("%d ", i);
                n = n / i;
            }
        }
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a positive integer : ");
    scanf("%d", &num);

    if (num > 0) {
        prime_factors(num);
    } else {
        printf("Please enter a positive integer.\n");
    }

    return 0;
}