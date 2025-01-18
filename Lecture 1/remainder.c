#include<stdio.h>
int main(){
    int a,b; // a>b
    printf("Enter Divident : ");
    scanf("%d",&a);
    printf("Enter Devisor : ");
    scanf("%d",&b);
    int q = a/b;
    int r = a - (b * q);
    printf("The Remainder when %d is devided by %d is : %d ",a,b,r);
    return 0;
}