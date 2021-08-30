#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main( int argc, char *argv[]){
	int no1,no2,sum;
	if(argc != 3){
		puts("Enter proper arguments");
		getch();
		exit(1);
	}
	no1 = atoi(argv[1]);
	no2 = atoi(argv[2]);
	sum = no1 + no2;
	printf("%d" , sum);
}
