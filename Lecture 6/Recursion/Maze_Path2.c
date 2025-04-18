#include<stdio.h>
int mazePath(int cr,int cc,int er,int ec){
    int RightWays = 0; //right
    int DownWays = 0; //down
    if (cr==er && cc==ec) return 1;
    //Here cr ->current row, cc -> current column, er -> end row, ec -> end column
    if(cr==er){
        RightWays += mazePath(cr,cc+1,er,ec); //Right
    }
    if(cc==ec){
        DownWays += mazePath(cr+1,cc,er,ec); //Down
    }
    if(cr<er && cc<ec){     //Here cr<er and cc<ec means we can go right and down both
        RightWays += mazePath(cr,cc+1,er,ec); //Right
        DownWays += mazePath(cr+1,cc,er,ec); //Down
    }    //Here cr,cc+1 is the right cell and cr+1,cc is the down cell
    return RightWays + DownWays; 
}

int main(){
    int n; //Here n -> number of rows
    printf("Enter the number of rows of the maze : ");
    scanf("%d",&n);
    int m; //Here m -> number of columns
    printf("Enter the number of columns of the maze : ");
    scanf("%d",&m);
    int noOfWays = mazePath(1,1,n,m); //Total Paths
    //Here 1,1 is the starting point and n,m is the ending point
    printf("Total no of ways to reach the destination : %d\n",noOfWays);
    return 0;
}