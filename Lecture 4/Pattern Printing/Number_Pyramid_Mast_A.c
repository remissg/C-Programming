#include<stdio.h>
int main (){
    int n;
    printf("Enter the number of lines : ");
    scanf("%d",&n);
    int nst = n - 1;
    int nsp = 1;
    for(int i=1;i<=2*n-1;i++){
        printf("%d",i);
    }
    printf("\n");
    for(int i =1;i<=n;i++){
        int a = 1;
        for(int j=1;j<=nst;j++){
            printf("%d",a);
            a++;
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
            a++;
        }
        for(int j=1;j<=nst;j++){
            printf("%d",a);
            a++;
        }
        nsp+=2;
        nst--;
        printf("\n");
    }
    return 0;
}