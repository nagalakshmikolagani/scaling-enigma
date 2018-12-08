#include <stdio.h>
#include <stdlib.h>

int main()
{
   char s[20];
   int n,i;
   FILE *fptr;
   fptr = fopen("E:\\program.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }
   printf("Enter number of strings to be stored");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     printf("Enter a string: ");
     scanf("%s",s);
     fprintf(fptr,"%s\n",s);
   }
   fclose(fptr);

   return 0;
}
