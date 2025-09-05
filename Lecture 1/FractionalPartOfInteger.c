#include<stdio.h>
int main (){
    float x;
    printf("Enter The Desimal Number : ");
    scanf("%f",&x);
    int y = x;
    printf("Integer part of the number is : %d\n",y);
    float z = x-y;
    printf("The fractional part of the number is : %f",z);
    return 0;
}