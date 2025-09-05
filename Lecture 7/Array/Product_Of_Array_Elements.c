#include<stdio.h>
int main(){
    int size,i;
    printf("Enter the size of the array : ");
    scanf("%d",&size);

    int arr[size],product = 1;

    for(i = 0; i < size; i++){
        printf("Enter %d th elements : ",i);
        scanf("%d",&arr[i]);
        product *= arr[i];
    }

    printf("The product of all array elements : %d",product);

    return 0;
}