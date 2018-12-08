#include <stdio.h>
#include <stdlib.h>

int main()
{
   int c,n=0,i;
   char ch;
   FILE *fptr;

   if ((fptr = fopen("E:\\fil.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }
   for(i=0;i<100;i++) {
   fscanf(fptr,"%c",&ch);
    printf("%c",ch);
   }
   fclose(fptr);

   return 0;
}
