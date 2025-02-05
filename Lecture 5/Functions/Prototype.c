#include<stdio.h>
void england(){
    printf("You are in england.\n");
    return;
}
void india(){
    printf("You are in india.\n");
    void australia();
    australia();
    return;
}
int main(){
    india();
    return 0;
}
void australia(){
    printf("You are in australia.\n");
    england();
    return;
}