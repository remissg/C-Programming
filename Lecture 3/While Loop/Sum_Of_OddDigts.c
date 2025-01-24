#include<stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int sum = 0;
    int LastDigit = 0;
    while(n>0){
       LastDigit = n%10;
       if(LastDigit % 2 != 0)
       sum = sum + LastDigit;
       n = n/10;
    }
    printf("The sum of odd digits are %d",sum);
    return 0;
}