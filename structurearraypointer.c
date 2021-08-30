#include<stdio.h>
#include<conio.h>
typedef struct stud{
	int roll_no;
	char name[50];
}STUD;
void display(STUD *, int);
int main(){
	STUD s[3];
	int i,size;
	
	printf("How much records do you want to enter <max :50> \n\n\n: ");
	scanf("%d" , &size);
	printf("\nEnter %d records: \n\n" , size);
	
	for(i=0; i<size; i++){
		printf("\nEnter roll no.: ");
		scanf("%d", &s[i].roll_no);
		printf("\nEnter Name: ");
		fflush(stdin);
		gets(s[i].name);
		printf("\n\n");
	}
	display(s,size);
	return 0;
}
void display(STUD *s1, int size){
	int i;
	printf("\nYou have entered: \n\n");
	
	for(i=0; i<size; i++){
		printf("\nRoll no.: %d", (s1 + i) ->roll_no);
		printf("\nName: %s", (s1 + i) ->name);
	}
}

