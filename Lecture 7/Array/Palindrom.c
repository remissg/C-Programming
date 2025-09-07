#include<stdio.h>
int isPalindrom(int arr[], int n){
    int i = 0;
    int j = n-1;

    while (i < j){
        if(arr[i] != arr[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
        
}
int main(){
    int n;
    printf("Enter the size of your array : "); 
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter %d th element : ",i+1);
        scanf("%d",&arr[i]);
    }

    if(isPalindrom(arr, n)){
        printf("The array is a palindrom.\n");
    }else{
        printf("The array is not a palindrom.\n");
    }
    return 0;
}