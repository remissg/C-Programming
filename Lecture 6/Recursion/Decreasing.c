#include<stdio.h>
void decreasing(int n){
    if (n==0) return;
    printf("%d\n",n);
    decreasing(n-1);
    return;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("The numbers from %d to 1 is : \n",n);
    decreasing(n);
    return 0;
}