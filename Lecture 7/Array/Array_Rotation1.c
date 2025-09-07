#include<stdio.h>
void reverse(int arr[], int si, int ei){        // si -> starting index    ,    ei -> ending index
    for(int i=si,j=ei; i<=j; i++,j--){
       int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp; 
    }
    return;
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

    int k;
    printf("Enter the number of rotations : ");
    scanf("%d",&k);

    k = k % n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }    
    return 0;
}