#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp,*fs;
	char ch;
	
	fp = fopen("source.txt" , "r");
	if (fp == NULL){
		printf("Cannot open file");
		exit(0);
	}
	while(1){
		ch = fgetc(fp);
		if(ch == EOF)
			break;
		printf("%c" , ch);
	}
	fclose(fp);
}
