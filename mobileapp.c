#include<stdio.h>
#include<string.h>

typedef struct mobile {
	char mob_name[20],cmp_name[20];
	int memory;
	int price;
}MOB;

void display(MOB *);
void searchByName(MOB * , int);
void main(){
	MOB a[50];
	int size,choice,flag=1,i,mem,min,max;
	char cmp[20],chc;
	
	printf("How much records do you want to enter <max :50>\n\n\n ");
			scanf("%d" , &size);
			printf("\nEnter Record:");
			for(i=0 ; i<size ; i++){
				printf("%d" , i+1);
				printf("\n\nEnter mobile name");
				fflush(stdin);
				gets(a[i].mob_name);
				printf("\nEnter Company of The Mobile : ");
				fflush(stdin);
				gets(a[i].cmp_name);
				printf("\nEnter Memory of The Mobile in GiB: ");
				scanf("%d" , &a[i].memory);
				printf("\nEnter Price of The Mobile: ");
				scanf("\n\n\n%d" , &a[i].price);
			}
	do{
	chc = 'n';
	printf("Enter Your Choice: \n\n");
	printf("1. Search Mobile By Company\n\n");
	printf("2. Search Mobile By Memory\n\n");
	printf("3. Search Mobile By Price Range\n\n");
	
	scanf("%d" , &choice);
	
	switch(choice){
		x:
		case 1 :
			searchByName(a , size);
			printf("Do you want to continue?");
			fflush(stdin);
			scanf("%c" , &chc);
			break;	
		case 2:
			printf("Do you want to continue?");
			fflush(stdin);
			scanf("%c" , &chc);
			break;	
		case 3:
			printf("Do you want to continue?");
			fflush(stdin);
			scanf("%c" , &chc);
			break;
		default :
			printf("Enter correct choice");					
		}	
		
		}while (chc == 'y');
	}
void display(MOB *a){
	printf("Mobile name is%s\n" , a -> mob_name);
	printf("Company name is%s\n" , a -> cmp_name);
	printf("Mobile price is%d\n" , a -> price);
	printf("Mobile memory is%d\n\n\n" , a -> memory);	 
}
void searchByName(MOB *a , int size){
	char cmp[50];
	int i;
	printf("************Search By Company**********");
	printf("Enter name of the company");
	fflush(stdin);
	gets(cmp);
	for(i=0 ; i<size ; i++){
				if((strcmp(a[i].cmp_name,cmp)) == 0)
					display(a);
			}
}
void searchByRAM(MOB *a , int size){
	int mem;
	int i;
	printf("************Search By RAM**********");
	printf("Enter your reqiurement for memory");
	scanf("%d" , &mem);
			for(i=0 ; i<size ; i++){
				if(a[i].memory >= mem)
					display(a);
				}
}
void searchByPriceRange(MOB *a , int size){
	int i;
	int max,min;
	printf("Enter the range of price");
	printf("************Search By Price Range**********");
	scanf("%d%d" , &min , &max);
	for(i=0 ; i<size ; i++){
		if(min < a[i].price && max > a[i].price )
				display(a);
	}
}
