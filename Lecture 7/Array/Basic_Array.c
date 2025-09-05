#include<stdio.h>
int main (){
    int arr[5] ={2,4,6,8,10};
    arr[4] = 100; // {2,4,6,8,100}
    printf("%d\n",arr[4]);

    float a[3] = {1.2,3.5,2.8};
    printf("%f\n",a[2]);

    char ch[4] = {'a','e','U','@'};
    printf("%c\n",ch[3]);
    return 0;
}