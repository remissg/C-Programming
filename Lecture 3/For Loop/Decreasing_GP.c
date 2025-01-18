#include<stdio.h>
int main(){
    int n;  //এতো বার লুপ কাজ করবে
    printf("Enter a number : ");
    scanf("%d",&n);
    // 100 50 25 .....upto n number of terms
    //we are going to use extra variables
    float a = 100;
        for(float i=1;i<=n;i++){
            printf("%f ",a);
            a = a / 2;
        }
    return 0;
}