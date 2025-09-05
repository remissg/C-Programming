#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int a = 1;
    int b = 1;
    int nextTerm;
   

    for (int i = 1; i <= n; ++i) {
        printf("%dth Fibonacci number is : %d\n", i,a);
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    return 0;
}