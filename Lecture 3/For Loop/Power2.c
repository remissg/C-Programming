#include <stdio.h>

int main() {
    int a,b;
    printf("Enter the base: ");
    scanf("%d", &a);
    printf("Enter the exponent: ");
    scanf("%d", &b);
    int power = 1;
    for(int i = 1; i <= b; ++i) {
        power = power * a;
        printf("%d raised to the power of %d is : %d\n", a, i, power);
    }

   
    return 0;
}