#include<stdio.h>
int main (){
    int cp;
    printf("Enter cost price : ");
    scanf("%d",&cp);
    int sp;
    printf("Enter selling price : ");
    scanf("%d",&sp);
    if(cp<sp){
        printf("Profit");
    }
    if(cp>sp){
        printf("Loss");
    }
    if(sp==cp){
        printf("No profit , No loss");
    }
        
    return 0;
}