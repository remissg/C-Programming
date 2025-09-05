#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    printf("Armstrong numbers between 1 and 500 are:\n");

    for (num = 1; num <= 500; ++num) {
        // Reset variables for each iteration
        originalNum = num;
        n = 0;
        result = 0.0;

        // Find the number of digits
        while (originalNum != 0) {
            originalNum /= 10;
            ++n;
        }

        originalNum = num;

        // Calculate the sum of the nth power of each digit
        while (originalNum != 0) {
            remainder = originalNum % 10;

            // pow() returns a double type value
            result += pow(remainder, n);

            originalNum /= 10;
        }

        // Check if the number is an Armstrong number
        if ((int)result == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
