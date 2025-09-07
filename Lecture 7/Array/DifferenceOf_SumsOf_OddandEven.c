#include<stdio.h>
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int evenSum = 0, oddSum = 0;
    for(int i=0; i<7; i++){
        if(i%2 == 0)    evenSum += arr[i];
        else    oddSum += arr[i];
    } 

    printf("Sum of even index elements : %d\n",evenSum);
    printf("Sum of odd index elements : %d\n",oddSum);

    int diff = evenSum - oddSum;
    printf("The difference between sum of evens and sum of odds : %d",diff);
    return 0;
}