#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    printf("Enter the third number : ");
    scanf("%d",&c);
        if(a>b){
            if(a>c)
                printf("%d is greatest",a);
            else
                printf("%d is graetest",c);
        }
        else{
            if(b>c)
                printf("%d is greatest",b);
            else
                printf("%d is graetest",c);
        }
    return 0;
}