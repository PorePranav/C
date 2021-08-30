#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main( int argc, char *argv[]){
	FILE *fs, *ft;
	char ch;
	if(argc != 3){
		puts("Enter proper arguments");
		getch();
		exit(1);
	}
	fs = fopen(argv[1], "r");
	if(fs == NULL){
		puts("Cannot open source file");
		getch();
		exit(2);
	}
	ft = fopen(argv[2], "w");
	if(ft == NULL){
		puts("Cannot open target file");
		fclose(fs);
		getch();
		exit(2);
	}
	while(!feof(fs)){
		ch = fgetc(fs);
		fputc(ch, ft);
	}
	fclose(fs);
	fclose(ft);
	printf("File copied successfully");
	getch();
}
