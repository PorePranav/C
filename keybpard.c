#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char s[50];
	FILE *fp;
	
	fp = fopen("source.txt.txt" , "w");
	if (fp == NULL){
		printf("File Cannot be opened");
		exit(0);
	}
	printf("Enter few lines:");
	while((strlen(gets(s))) > 0){
		fputs(s,fp);
		fputs("/n" , fp);
	}
	fclose(fp);
	printf("File printed sucessfully");
}
