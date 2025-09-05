#include<stdio.h>
int main (){
    float principal,rate,time,si;
    printf("Enter The Principal : ");
    scanf("%f",&principal);
    printf("Enter The Rate Of Interest : ");
    scanf("%f",&rate);
    printf("Enter The Time Period : ");
    scanf("%f",&time);
    si = (principal*rate*time)/100;
    printf("Your Simple Interest Is : %f",si);
    return 0;
}