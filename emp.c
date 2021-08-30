#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main( )
{
	FILE *fp;
	char ch;
	typedef struct employee{
	char name[50];
	int age;
	float sal;
	}emp;
	
	emp e;
	fp = fopen("source.txt.txt", "w");
	if(fp == NULL){
		puts("Cannot open file");
		exit(1);
	}
	
	do{
		printf("\nEnter name:\n age:\n sal:\n");
		scanf("%s%d%f", e.name, &e.age, &e.sal);
		fprintf(fp, "%s %d %f\n", e.name, e.age,e.sal);
		printf("\nAdd another record <y/n>: ");
		fflush(stdin);
		ch = getche();
	}while(ch == 'y');
	
	fclose(fp);
	printf("\nData written successfully:");
	getch();
}
