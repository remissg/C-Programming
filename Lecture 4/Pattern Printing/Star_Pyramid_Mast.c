#include<stdio.h>
int main (){
    int n;
    printf("Enter the number of lines : ");
    scanf("%d",&n);
    int nst = n - 1;
    int nsp = 1;
    int m = nst*2+1;
    for(int i=1;i<=m;i++){
        printf("*");
    }
    printf("\n");
    for(int i =1;i<=n;i++){
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        nsp+=2;
        nst--;
        printf("\n");
    }
    return 0;
}