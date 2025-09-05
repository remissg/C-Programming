#include<stdio.h>
int main ()
{
    int a;
    int b;
    int c;
    printf("Enter Ram's age : ");
    scanf("%d",&a);
    printf("Enter Shyam's age : ");
    scanf("%d",&b);
    printf("Enter Ajay's age : ");
    scanf("%d",&c);
        if(a<b && a<c){
            printf("Ram is youngest");
        }
        if(b<a && b<c){
            printf("Shyam is youngest");
        }
        if(c<a && c<b){
            printf("Ajay is youngest");
        }
    return 0;
}