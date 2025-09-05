#include<stdio.h>
int main(){
    int marks[10];

    for(int i=0;i<=9;i++){
        printf("Enter marks under 100 of student no %d : ",i+1);
        scanf("%d",&marks[i]);
    }

    printf("Students with marks less than 35: ");
    for(int i=0;i<=9;i++){
        if(marks[i]<35){
            printf("%d ",i+1);
        }
    }
    return 0;
} 