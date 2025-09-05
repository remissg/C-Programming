#include<stdio.h>
int main(){
    int n , i;
    printf("Enter the size of array : ");
    scanf("%d",&n);

    int arr[n];

    for(i = 0; i < n; i++){
        printf("Enter %d th element : ",i);
        scanf("%d",&arr[i]);
    }

    int min = arr[0];
    
    for(i = 0; i  < n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }

    printf("The minimum value is : %d",min);
    return 0;
}