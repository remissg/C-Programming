#include<stdio.h>
int main (){
    int n,n1;
    printf("Enter a number : ");
    scanf("%d",&n);
    int r = 0;
    int sum ;
    n1 = n;
    while(n!=0){
       r = r*10;
       r = r + (n%10);
       n = n/10;
    }
    sum = n1 + r;
    printf("The sum of %d and %d is : %d\n",n1,r,sum);
    return 0;
}