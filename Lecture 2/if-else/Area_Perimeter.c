#include <stdio.h>
int main(){
    int l;
    printf("Enter lenth : ");
    scanf("%d",&l);
    int b;
    printf("Enter breadth : ");
    scanf("%d",&b);
    int A = l * b;
    int P = 2 * (l + b);
        if(A>P){
            printf("Area is greater than Perimeter");
        }
        if(A<P){
            printf("Area is Less than Perimeter");
        }
        else{
            printf("Area is equal to Perimeter");
        }
    return 0;
}