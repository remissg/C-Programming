#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i=n;i>=1;i--) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    printf("Factorials of first %d numbers:\n", n);
    for (int i=1;i<=n;i++) {
        printf("Factorial of %d = %d\n", i, factorial(i));
    }

    return 0;
}
