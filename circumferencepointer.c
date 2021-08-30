#include<stdio.h>
#include"pranav.h"
int main(){
	int r;
	float circum;
	
	printf("Enter radius of the circle");
	scanf("%d" , &r);
	
	circumfer(r,circum);
	circum = 2 * 3.14 * r;
	printf("Circumference of the circle is %0.2f" , circum);
}

