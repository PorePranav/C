#include<string.h>

int circumArea(int r , float area){
	area = 3.14 * r * r;
	return area;
}
float circumfer(int r , float circum){
	circum = 3.14 * r * r;
	return circum;
}
void arrcpy(int *arr ,int *arr1, int size){
	int i,j,temp;

	for(i=0;i<size;i++){
		*(arr1 + i) = *(arr + i);
	}
}
void arrrev(int *arr , int size){
	int i,j,temp;
	for(i=0,j=size-1;i<j;i++,j--){
		temp = *(arr+i);
		*(arr+i) = *(arr+j);
		*(arr+j) = temp;
	}
}
void calpower(int base , int index , int *power){
	int j;
	for(j=0;j<index;j++)
		*power = *power * base;
}
void arracs(int arr[] , int size){
	int i,j,temp;
	for(i=0 ; i < size-1 ; i++){
		for(j=i+1 ; j<size ; j++){
			if(arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
void facto(int num , int *fact){
	int i;
	for(i=1; i<=num ; i++){
		*fact *= * i;
	}
}
void stracs(char arr[][50] , int size){
	int i,j;
	char temp[50];
	for(i=0 ; i < size-1 ; i++){
		for(j=i+1 ; j<size ; j++){
			if((strcmp(arr[i] , arr [j])) > 0){
				strcpy( temp , arr[i]);
				strcpy(arr[i] , arr[j]);
				strcpy(arr[j] , temp);
			}
		}
	}
}
void swap(int *n1 , int *n2){
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp; 
}
void calsum(int no1 , int no2 ,int *sum , int *sub, int *mul , float *div ){
	
	*sum = no1 + no2;
	*sub = no1 - no2;
	*mul = no1 * no2;
	*div = (float)no1 / no2;
}
void arrCpy(int *arr ,int *arr1, int size){
	int i,j,temp;

	for(i=0;i<size;i++){
		*(arr1 + i) = *(arr + i);
	}
}
void arrrev(int *arr , int size){
	int i,j,temp;
	for(i=0,j=size-1;i<j;i++,j--){
		temp = *(arr+i);
		*(arr+i) = *(arr+j);
		*(arr+j) = temp;
	}
}
void calPower(int base , int index , int *power){
	int j;
	for(j=0;j<index;j++)
		*power = *power * base;
}

