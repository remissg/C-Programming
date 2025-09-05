#include<stdio.h>
int powerlog(int a,int b){
    if(b==0)    return 1;
    int x = powerlog(a,b/2);
    if(b%2==0) return x*x; // even case
    else return a*x*x; // odd case
}
int main(){
    int a;
    printf("Enter the base : ");
    scanf("%d",&a);
    int b;
    printf("Enter the power : ");
    scanf("%d",&b);
    int p = powerlog(a,b);
    printf("%d raised to the power %d is : %d",a,b,p);
    return 0;
}