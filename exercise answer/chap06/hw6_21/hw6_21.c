/* hw6_21.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{    
   char ch;
   
   printf("�п�J�r��:");
   scanf("%c",&ch);
   
   switch(ch)
   {      
      case 'a':
         printf("�z��Ja\n");
         break;
      case 'b':
         printf("�z��Jb\n");
         break;      
      default:
         printf("�z��J�����Oa��b\n");
   }              
      
   system("pause");
   return 0;
}

/* output---------
�п�J�r��:b
�z��Jb
----------------*/
