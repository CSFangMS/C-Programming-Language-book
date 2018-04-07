/* hw12_3.c */
#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int main(void)
{ 
   FILE *fptr;
   char str[MAX];
   
   fptr=fopen("c:\\prog\\welcome.txt","r");
   if(fptr!=NULL)
   {
      while(fgets(str,MAX,fptr)!=NULL)
         printf("%s",str);

      fclose(fptr);				
      printf("\n");
   }
   else
      printf("ÀÉ®×¶}±Ò¥¢±Ñ!!\n"); 
   
   system("pause");
   return 0;
}

/* output------------
Welcome to the
world of C language
-------------------*/
