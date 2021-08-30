#include<stdio.h>
#include"pranav.h"
#define pi 3.14

int main[]{
	int r;
	float area;
	
	printf("Enter the radius:\n");
	scanf("%d" , &r);
	
	area = circumArea(r , area);
	printf("The area is %0.2f" , area);
}

