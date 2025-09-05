#include<stdio.h>
int main (){
    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    int m;
    printf("Enter the number of columns : ");
    scanf("%d",&m);
    // ******** ....... upto n number of stars
    for(int i=1;i<=n;i++){  // outer loop -> no of lines
        for(int i=1;i<=m;i++){  // inner loop -> no of stars in each line
            printf("* ");
        }
        printf("\n");   //For input a enter after every line
    }
    return 0;
}