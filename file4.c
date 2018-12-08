#include <stdio.h>
#include <stdlib.h>

int main()
{
   int c,n=0;
   char ch;
   FILE *fptr;

   if ((fptr = fopen("E:\\myfile.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }
   while ((c = fgetc(fptr)) != EOF) {
   fscanf(fptr,"%c",&ch);
   if(ch=='$')
    n++;
   }
   fclose(fptr);
   printf("%d",n);

   return 0;
}
