#include<stdio.h>

int main(){

    int num[20],i,j,max;

    printf("How many numbers do you want to enter?\n");
    scanf("%d\n",&j);

    for(i=0;i<=j;i++){
        printf("enter number %d", i+1);
        scanf("%d",num[i]);
    }

    for(i=0;i<j;i++){
        if(num[i]>num[i+1]){
            max = num[i];
        }
    }
    printf("Max no is %d", max);
    return 0;
}