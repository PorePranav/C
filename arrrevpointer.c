#include<stdio.h>
#include"arrcpypointer.h"
void arrrev(int *arr , int size);
int main(){
	int arr[50],size,i;
	
	printf("How much numbers do you want to enter?\t");
	scanf("%d" , &size);
	
	printf("Enter %d numbers\n" , size);
	
	for(i=0;i<size;i++)
		scanf("%d" , &arr[i]);
		
	arrrev(arr,size);
	printf("The reversed array is :");
	for(i=0;i<size;i++)
		printf("%d\t" , arr[i]);
}


