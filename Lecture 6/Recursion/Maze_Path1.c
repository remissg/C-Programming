#include<stdio.h>
int mazePath(int n,int m){
    int Rightways = 0; 
    int Downways = 0;  
    if(n==1 && m==1) return 1; //Base case
    //Here n==1 and m==1 means we have reached the destination
    if(n==1){   //can't go down
        Rightways += mazePath(n,m-1);
    }
    if(m==1){   //can't go right
        Downways += mazePath(n-1,m); 
    }
    if(n>1 && m>1){ //Here n>1 and m>1 means we can go right and down both
        Rightways += mazePath(n,m-1);
        Downways += mazePath(n-1,m); 
    }
    int totalways = Rightways + Downways;
    return totalways; 
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