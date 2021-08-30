#include<stdio.h>

int main(){
	int i,j,size,count;
	char name[50][50];
	printf("No.of names you want to enter");
	scanf("%d" , &size);

	printf("Enter %d names" , size);
	
	for(i=0 ; i<size ; i++){
		fflush(stdin);
		gets(name[i]);	
	}
	for(i=0;i<size;i++){
		for(j=0,count=0;name[i][j] != '\0';j++){
			if(name[i][j] == 'a' || name[i][j] == 'e' || name[i][j] == 'i' || name[i][j] == 'o' || name[i][j] == 'u' )
				count++;
		}
		printf("the vowels in row %d are %d\n " , i+1 , count);	
	}
}
