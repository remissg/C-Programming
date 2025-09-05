#include<stdio.h>
int main(){
	int size,i;
	printf("Enter the size of your array : ");
	scanf("%d",&size);
	int arr[size];
	for(i = 1; i <= size; i++){
		printf("\nEnter %d th element : ",i);
		scanf("%d",&arr[i]);
		printf("Your %d th element is : %d",i,arr[i]);
	}
	return 0;
 }
