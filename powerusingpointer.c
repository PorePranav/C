#include<stdio.h>
#include"arrcpypointer.h"
void calPower(int  , int  , int *);
int main(){
	int base,power=1,index;
	printf("Enter the base and the index");
	scanf("%d%d" , &base ,&index);
	
	calPower(base,index,&power);
	printf("%d ^ %d is %d" , base , index , power);
}

