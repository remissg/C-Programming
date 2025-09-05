#include<stdio.h>
void increasing(int n){
    if (n==0) return;   // Base case
    increasing(n-1);    // Recursive call
    printf("%d\n",n);   // code
    return;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("The numbers from 1 to %d is : \n",n);
    increasing(n);
    return 0;
}