#include<stdio.h>
typedef struct student {
		int rollno;
		char name[50];
		
	}STUD;

int main(){
	STUD s[50];
	int size,i;
	printf("How much records do you want to enter <max :50> \n\n\n: ");
	scanf("%d" , &size);
	
	printf("\nEnter Records:");
	for(i=0 ; i<size ; i++){
		printf("\nEnter roll no of student %d : " , i+1);
		scanf("\n%d" , &s[i].rollno);
		printf("\nEnter name no of student %d : " , i+1);
		fflush(stdin);
		gets(s[i].name);
	}
	display(s , size);
}
void display(STUD s[] , int size){
	int i;
	
	for(i=0;i<size;i++){
	printf("\nRoll No.: %d", s[i].rollno);
	printf("\nName: %s", s[i].name);
	}
}
