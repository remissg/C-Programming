#include<stdio.h>
int main (){
    int n;
    printf("Enter the number of lines : ");
    scanf("%d",&n);
    int nst = n - 1;
    int nsp = 1;
    for (int i = 1; i <= n; ++i) {
        printf("%d", i);
    }
    for (int i = n - 1; i >= 1; --i) {
        printf("%d", i);
    }
    printf("\n");
    for (int i = 0; i < n; ++i) {
        for(int j=1;j<=nst;j++){
            printf("%d",j);
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for (int j = nst; j >= 1; j--) {
            printf("%d", j);
        }
        nsp+=2;
        nst--;
        printf("\n");
    }
    return 0;
}