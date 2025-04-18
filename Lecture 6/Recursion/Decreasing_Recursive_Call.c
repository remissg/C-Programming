#include<stdio.h>
void increasing(int x,int n){
    if (x>n) return;
    increasing(x+1,n);
    printf("%d\n",x);
    return;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("The numbers from %d to 1 is : \n",n);
    increasing(1,n);
    return 0;
} 