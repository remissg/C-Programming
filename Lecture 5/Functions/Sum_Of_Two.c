#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int a;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    int b;
    printf("Enter 1st number : ");
    scanf("%d",&b);
    int sum = add(a,b);
    printf("The sum of two number is : %d",sum);
    return 0;
}