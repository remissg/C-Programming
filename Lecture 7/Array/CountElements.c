#include<stdio.h>
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int x, count = 0; 
    printf("Enter a number to find it's greater elements : ");
    scanf("%d",&x);
    for(int i=0; i<7; i++){
        if(arr[i] > x) count++;
    }

    printf("In that array %d elements are greater than %d.",count,x);
    return 0;
}