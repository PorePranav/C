#include<stdio.h>
#include"pranav.h"

int main(){
	int num,fact=1,sum;
	
	printf("Enter any number");
	scanf("%d" , &num);
	
	facto(num,&fact);
	
	printf("%d!=%d",num,fact);
	return 0;
}

