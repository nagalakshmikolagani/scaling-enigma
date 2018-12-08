#include <stdio.h>

int main ()
{
  FILE * fptr;
  char str[100];;
  char str1;
    fptr = fopen("E://mylog.txt", "a");
    printf(" Enter the line to be appended: \n");
    fgets(str, sizeof str, stdin);
    fputs(str, fptr);
    fclose (fptr);
//------- End of reading ------------------
  return 0;
}
