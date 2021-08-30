#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char s[50];
	FILE *fp;
	
	fp = fopen("source.txt.txt" , "r");
	if (fp == NULL){
		printf("File Cannot be opened");
		exit(0);
	}

	while((fgets(s,49,fp)) != NULL){
		printf("%s" , s);

	}
	fclose(fp);
	
}
