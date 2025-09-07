#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7] = {12,21,23,32,34,43,45};
    int x = 43;
    int idx = -1; 
    bool flag = false;  // false means not present
    
    for (int i=0; i<=6; i++){
        if(arr[i]==x){
            flag = true;    // true means present
            idx = i;
            break;
        }
    }
    if(flag==false){
        printf("%d is not present in the array.",x);
    }
    else{
        printf("%d is present in the array in %d th index.",x,idx);
    }
    return 0;
}