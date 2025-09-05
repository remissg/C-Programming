#include<stdio.h>
void TowerOfHanoi(int n,char src,char helper,char dest){
    if(n==1){ //Base case
        printf("Move disk 1 from %c to %c\n",src,dest); //Move disk 1 from source to destination
        return;
    }
    TowerOfHanoi(n-1,src,dest,helper); //Move n-1 disks from source to helper using destination as helper
    printf("Move disk %d from %c to %c\n",n,src,dest); //Move nth disk from source to destination
    TowerOfHanoi(n-1,helper,src,dest); //Move n-1 disks from helper to destination using source as helper
    return;
    //Here src -> source, dest -> destination, helper -> helper tower
}
int main(){
    int n;
    printf("Enter the  number of disks : ");
    scanf("%d",&n);
    
    TowerOfHanoi(n,'A','B','C'); //Function call
    return 0;
} 