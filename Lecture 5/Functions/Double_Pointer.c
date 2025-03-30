#include<stdio.h>
int main (){
    int a = 25;
    int* x = &a;
    int** y = &x;
    printf("%p\n",a);
    printf("%p\n",*x);
    printf("%d\n",**y);
    return 0;
} 