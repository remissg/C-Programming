#include<stdio.h>
int main (){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){  
        int nsp = n - i;
        int nst = i;
        for(int j=1;j<=nsp;j++){  
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        printf("\n");   
    }
    return 0;
}