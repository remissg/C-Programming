#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 1st number : ");
    scanf("%d",&b);
    printf("Enter 1st number : ");
    scanf("%d",&c);
    printf("Enter 1st number : ");
    scanf("%d",&d);
    if(a>b && a>c && a>d){
        printf("%d is graetest.",a);
    }
    if(b>a && b>c && b>d){
        printf("%d is graetest.",b);
    }
    if(c>a && c>b && c>d){
        printf("%d is greatest.",c);
    }
    if(d>a && d>b && d>c){
        printf("%d is greatest.",d);
    }
    return 0;
}