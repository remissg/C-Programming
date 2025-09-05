#include<stdio.h>
int fibo(int n){
    if(n<=2) return 1;  // Base case
    int recAns = fibo(n-1) + fibo(n-2);
    return recAns; 
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("The %dth fibonacci number is : %d",n,fibo(n));  
    return 0;
} 