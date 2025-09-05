#include<stdio.h>
int mazePath(int n,int m){
    if (n==1 || m==1) return 1;
    int Right = mazePath(n,m-1); //Right
    int Down = mazePath(n-1,m); //Down
    //Here n-1,m is the right cell and n,m-1 is the down cell 
    return Right + Down; 
}
int main(){
    int n;//Here n -> number of rows
    printf("Enter the number of rows of the maze : ");
    scanf("%d",&n);
    int m;//Here m -> number of columns
    printf("Enter the number of columns of the maze : ");
    scanf("%d",&m);
    int noOfWays = mazePath(n,m); //Total Paths
    //Here n,m is the starting point and 1,1 is the ending point
    printf("Total no of ways to reach the destination : %d\n",noOfWays);
    return 0;
}