#include<stdio.h>
int main(){
    int size,i;
    printf("Enter the size of your array : ");
    scanf("%d",&size);

    int arr[size],sum=0;

    for(i = 0; i <size; i++){
        printf("Enter %d th element : ",i);
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("The sum of all the elements : %d",sum);
    
    return 0;
}