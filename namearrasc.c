#include<stdio.h>
#include<string.h>
#include"pranav.h"

int main(){
	int i,j,size;
	char arr[10][50];
	
	printf("No.of names you want to enter");
	scanf("%d" , &size);
	printf("Enter %d names" , size);
	
	for(i=0 ; i<size ; i++){
		fflush(stdin);
		gets(arr[i]);	
	}
	arrAcs(arr , size);
	
	printf("The sorted array is ");
	for(i=0 ;i<size ; i++)
		puts(arr[i]);
	return 0;
}

