#include <stdio.h>
#include <stdlib.h>
 
int main()
{
   char ch;
   FILE *fs,*ft;
 
   fs = fopen("source.txt", "r");  
   
   if (fs == NULL){
      printf("Error while opening the file:");
      exit(1);
   }
   ft = fopen("target.txt" , "w");
   
   if (ft == NULL){
      printf("Error while opening the file");
      fclose(fs);
      exit(1);
   }
   while(1){
   	ch = fgetc(fs);
	if(ch == EOF)
		break;
   	fputc(ch, ft);
   }
   fclose(fs);
   fclose(ft);
   printf("File copied succesfully");
   return 0;
}
