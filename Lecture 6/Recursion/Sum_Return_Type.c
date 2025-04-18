#include<stdio.h>
int sum(int n){
    if(n==1 || n==0) return n;  // Base case
    int recAns = n + sum(n-1); 
    return recAns;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int s = sum(n);
    printf("The sum from 1 to %d is : %d",n,s);  
    return 0;
} 