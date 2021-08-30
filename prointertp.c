#include<stdio.h>
#include"pranav.h"
int main(){
	int no1,no2,sum,sub,mul;
	float div;
	
	printf("Enter any two numbers");
	scanf("%d\n%d" ,&no1,&no2 );
	calsum(no1 , no2 , &sum , &sub , &mul , &div);
	printf("%d+%d = %d\n" , no1 , no2 , sum);
	printf("%d-%d =%d\n" , no1 , no2 , sub);
	printf("%d x %d =%d\n" , no1 , no2 , mul);
	printf("%d/%d = %0.2f\n" , no1 , no2 , div );
	return 0;
}

