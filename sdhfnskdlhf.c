#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main( )
{
	FILE *fp;
	char ch;
	typedef struct student{
	char name[50];
	int rollno;
	int m1,m2,m3;
	float per;
	}STUD;
	
	STUD e;
	int i;
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
	for(i=0 ; (fscanf (fp, "%s %d %d %d %d",e[i].name, &e[i].rollno, &e[i].m1, &e[i].m2, &e.[i]m3)) != EOF;i++){
		printf("\n%s %d %d %d %d ", e[i].name,e[i].rollno, e[i].m1, e[i].m2, e[i].m3);
		e[i].per = ((e[i].m1 + e[i].m2 + e[i].m3)/300) *100.00;
		printf("%f" , e[i].per);
	}
		
		
	fclose(fp);
	getch();
	return 0;
}
