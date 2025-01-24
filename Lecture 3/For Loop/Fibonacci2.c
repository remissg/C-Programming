#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int a = 1;
    int b = 1;
    int nextTerm;
    printf("First %d Fibonacci numbers: ", n);

    for (int i = 1; i <= n; ++i) {
        printf("%d, ", a);
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    return 0;
}