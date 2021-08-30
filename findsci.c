#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
int main( )
{
	FILE *fp;
	char ch;
	typedef struct student{
	char name[50];
	int rollno;
	int m1,m2,m3;
	
	}STUD;
	
	STUD e;
	float per;
	fp = fopen("source.txt.txt", "w");
	if(fp == NULL){
		puts("Cannot open file");
		exit(1);
	}
	
	do{
		printf("\nEnter name:\n Roll No:\n Marks1:\n Marks2:\n Marks3:\n");
		scanf("%s%d%d%d%d", e.name, &e.rollno, &e.m1, &e.m2, &e.m3);
		fprintf(fp, "%s %d %d %d %d %d\n", e.name, e.rollno, e.m1, e.m2, e.m3);
		printf("\nAdd another record <y/n>: ");
		fflush(stdin);
		ch = getche();
	}while(ch == 'y');
	
	fclose(fp);
	printf("\nData written successfully:");
	getch();
	
	fp = fopen("source.txt.txt", "r");
	if(fp == NULL){
		puts("Cannot open file");
		exit(1);
	}
	while((fscanf (fp, "%s %d %d %d %d",e.name, &e.rollno, &e.m1, &e.m2, &e.m3)) != EOF){
		printf("\n");
		per = (e.m1 + e.m2 + e.m3)/3;
		printf("%f" ,per);
	}
		
		
	fclose(fp);
	getch();
	return 0;
}
