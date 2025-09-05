#include<stdio.h>
int main(){
    //SCOPE OF VARIABLES
    int i;
    for(i=1;i<=10;i=i+2) {
        printf("Hello Joydip\n");
    }
    printf("%d",i);
    return 0;
}