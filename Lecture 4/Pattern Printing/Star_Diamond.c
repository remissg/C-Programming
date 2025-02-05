#include<stdio.h>
int main (){
    int n;
    printf("Enter the number of lines : ");
    scanf("%d",&n);
    int nsp = n/2;      // number of space
    int nst = 1;       // number of stars
    int ml = n/2+1;     // middle line
    for(int i =1;i<=n;i++){
        for(int j=1;j<=nsp;j++){    //spaces
            printf(" ");
        }
        for(int k=1;k<=nst;k++){    //stars
            printf("*");
        }
        if(i<ml){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
    return 0;
}