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

    int max = arr[0];
    
    for(i = 0; i  < n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    printf("The maximum value is : %d",max);
    return 0;
}