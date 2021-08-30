#include<stdio.h>
#include"pranav.h"

int main(){
	int i,j,size,count;
	int arr[10];
	printf("No.of numbers you want to enter");
	scanf("%d" , &size);

	printf("Enter %d numbers" , size);
	
	for(i=0 ; i<size ; i++){
		fflush(stdin);
		scanf("%d" , &arr[i]);	
	}
	arracs(arr , size);
	
	printf("The sorted array is %d\t" , arr[i]);
	for(i=0 ;i<size ; i++)
		printf("%d\t" , arr[i]);
	
	return 0;
}

