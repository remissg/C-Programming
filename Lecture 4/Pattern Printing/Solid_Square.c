#include<stdio.h>
int main (){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    // ******** ....... upto n number of stars
    for(int i=1;i<=n;i++){  // outer loop -> no of lines
        for(int i=1;i<=n;i++){  // inner loop -> no of stars in each line
            printf("* ");
        }
        printf("\n");   //For input a enter after every line
    }
    return 0;
}