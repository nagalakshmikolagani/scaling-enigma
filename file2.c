#include <stdio.h>
#include <stdlib.h>

int main()
{
   int c;
   char ch;
   FILE *fptr;

   if ((fptr = fopen("E:\\program.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }
   while ((c = fgetc(fptr)) != EOF) {
   fscanf(fptr,"%c",&ch);
   if(ch=='b')
   printf("%c\n", ch);
   }
   fclose(fptr);

   return 0;
}
