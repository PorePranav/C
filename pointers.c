#include<stdio.h>
#include"pranav.h"
int main(){
	int no1,no2, *j;
	
	printf("Enter any two numbers to interchange");
	scanf("%d%d" ,&no1,&no2 );
	swap(&no1 , &no2);
	printf("%d\t%d" , no1 , no2);
	return 0;
}

