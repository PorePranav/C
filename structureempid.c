#include<stdio.h>
#include<string.hd

typedef struct employee{
	int empid,sal;
	char desg[15],dept[15];	
}EMP;
void isDepartment(EMP *  , int );
int main(){
	EMP e[50];
	int size,i;
	printf("How much records do you want to enter <max :50> \n\n\n: ");
	scanf("%d" , &size);
	printf("\nEnter %d records: \n\n" , size);
	
	for(i=0; i<size; i++){
		printf("Enter Employee ID: \n");
		scanf("%d", &e[i].empid);
		printf("Enter Employee Salary: \n");
		scanf(" %d\n", &e[i].sal);
		printf("Enter Designation\n");
		fflush(stdin);
		gets(e[i].desg);
		printf("Enter Department\n");
		fflush(stdin);
		gets(e[i].dept);
		printf("\n\n");
	}
	isDepartment(e , size);
	}
void isDepartment(EMP *e , int size){
	char department[15];
	int i;
	printf("People of which department do you want to print?");
	gets(department);
	
	for(i=0 ; i<size ; i++){
		if((strcmp(e->dept , department)) == 0){
				printf("Employee ID: %d \n", (e + i ) -> empid);
				printf("Employee Salary: %d \n" , (e + i ) -> sal);
				printf("Designation is : ");
				puts((e+i) -> desg);
				printf("Enter Department");
				puts((e+i) -> dept);
				printf("\n\n\n");
		}
	}
}

