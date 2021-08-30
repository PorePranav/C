#include<stdio.h>
#include<stdlib.h>
void main( )
{
	FILE *fp;
	char ch;
	
	struct emp{
	char name[50];
	int age;
	float sal;
	};
	
	struct emp e;
	fp = fopen("source.txt", "r");
	if(fp == NULL){
		puts("Cannot open file");
		exit(1);
	}
	
	while(fscanf(fp , "%s %d %f",e.name, &e.age, &e.sal) != EOF)
		fprintf("\n%s %d %f",e.name, e.age, e.sal);
	fclose(fp);
	printf("\nData read successfully:");
	
}
