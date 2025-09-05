#include<stdio.h>
int main()
{
    double x1,y1,x2,y2,x3,y3;
    printf("Enter x1 : ");
    scanf("%d",&x1);
    printf("Enter y1 : ");
    scanf("%d",&y1);
    printf("Enter x2 : ");
    scanf("%d",&x2);
    printf("Enter y2 : ");
    scanf("%d",&y2);
    printf("Enter x3 : ");
    scanf("%d",&x3);
    printf("Enter y3 : ");
    scanf("%d",&y3);
        double m1 = (y2-y1)/(x2-x1);
        double m2 = (y3-y2)/(x3-x2);
        if(m1==m2){
            printf("All three points fall on one straight line");
        }
        else{
            printf("Those points are not fall on one straight line");
        }
    return 0;
}