/* hw6_21.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{    
   char ch;
   
   printf("請輸入字元:");
   scanf("%c",&ch);
   
   switch(ch)
   {      
      case 'a':
         printf("您輸入a\n");
         break;
      case 'b':
         printf("您輸入b\n");
         break;      
      default:
         printf("您輸入的不是a或b\n");
   }              
      
   system("pause");
   return 0;
}

/* output---------
請輸入字元:b
您輸入b
----------------*/
