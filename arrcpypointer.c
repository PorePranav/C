#include<stdio.h>
#include"pranav.h"
int main(){
	int arr[50],arr1[50],size,i;
	
	printf("How much numbers do you want to enter?\t");
	scanf("%d" , &size);
	
	printf("Enter %d numbers\n" , size);
	
	for(i=0;i<size;i++)
		scanf("%d" , &arr[i]);
		
	arrcpy(arr,arr1,size);
	printf("The array cpoied in second array is\n");
	for(i=0;i<size;i++)
		printf("%d\t" , arr1[i]);
}


