#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char name1[31];
  char *name2="Adam MB";
  printf("Add First Name : "); fflush(stdin);
  gets(name1);
  if(strstr(name1,"Jordan"))
    printf("You Are : \n");
  else if(strstr(name1,"Desi"))
       {
        printf("First Name = %s \n", name1);
        printf("Second Name = %s \n", name2);  
       }
  system("PAUSE");	
  return 0;
}
