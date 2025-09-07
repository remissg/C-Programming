#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7] = {4,2,2,3,1,4,3};

    int max = INT_MIN;
    int smax = INT_MIN;
    
    for(int i = 0; i<7; i++){
        if(max < arr[i]){
            smax = max;
            max = arr[i];
        }
        else if(smax<arr[i] && max!=arr[i]){
            smax = arr[i];
        }
    }
    printf("The largest value is : %d\n",max);
    printf("The second largest value is : %d",smax);
    return 0;
}