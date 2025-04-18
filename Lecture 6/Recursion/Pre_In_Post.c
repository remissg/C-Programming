#include<stdio.h>
void preInPost(int n){
    if(n==0) return; //Base case
    printf("Pre %d\n",n); //Pre-order
    preInPost(n-1); //Recursive call
    printf("In %d\n",n); //In-order
    preInPost(n-1); //Recursive call
    printf("Post %d\n",n); //Post-order
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    preInPost(n); //Function call
    return 0;
} 