#include<stdio.h>

int main(){
	typedef struct student{
		char name[20];
		int rollno;
		int m1,m2,m3;
	}STUD;
	
	FILE *fp;
	int i;
	STUD s[10];
	int per;
	
	fp = fopen("source.txt.txt", "w");
	if(fp == NULL){
		puts("Cannot open file");
		exit(1);
	}
	
	do{
		printf("\nEnter name:\n Roll No:\n Marks of 3 subjects:\n");
		scanf("%s%d%d%d%d", s.name, &s.rollno, &s.m1, &s.m2, &s.m3 );
		fprintf(fp, "%s %d %f\n", e.name, e.age,e.sal);
		printf("\nAdd another record <y/n>: ");
		fflush(stdin);
		ch = getche();
	}while(ch == 'y');
	
	fclose(fp);
	printf("\nData written successfully:");
	getch();
	
}
