#include<stdio.h>
int main(){
    int n;  //এতো বার লুপ কাজ করবে
    printf("Enter a number : ");
    scanf("%d",&n);
    // 1,2,4,8,16,32 .....upto n number of terms
    //we are going to use extra variables
    int a = 1;
        for(int i=1;i<=n;i++){
            printf("%d ",a);
            a = a * 2;
        }
    return 0;
}