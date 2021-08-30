#include<stdio.h>
#include"pranav.h"
typedef struct student {
		int rollno;
		char name[50];
		int m1,m2,m3;
		float per;
		int total;
	}STUD;
	
int main(){
	
	int i,j,size;
	STUD a[50];
	float per;
	float per1 = 0;
	printf("How much records do you want to enter <max :50> \n\n\n: ");
	scanf("%d" , &size);
	
	printf("\nEnter Records:");
	for(i=0 ; i<size ; i++){
		printf("\nEnter roll no of student %d : " , i+1);
		scanf("\n%d" , &a[i].rollno);
		printf("\nEnter name no of student %d : " , i+1);
		fflush(stdin);
		gets(a[i].name);
		printf("\nEnter marks of 3 subjects of student %d : " , i+1);
		scanf("\n%d%d%d" , &a[i].m1,&a[i].m2,&a[i].m3);
		a[i].total = a[i].m1 + a[i].m2 + a[i].m3;
		a[i].per =  (float)a[i].total * 100 /300;
	}
	for(i=0,j=i+1;j<size;j++){
			if(a[j].per > a[i].per)
				i = j;		
	}
	printf("Name of topper is %s\n" , a[i].name);
	printf("Roll number is %d" , a[i].rollno);
	printf("Percentage is %f" , a[i].per);
	
	return 0;
}
