/* hw6_1.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{    
   char ch;
   
   printf("�п�J�@�Ӧr��:");
   scanf("%c",&ch);
   
   if(ch<=57 && ch>=48)
      printf("���r���O�Ʀr\n"); 
   if((ch<=90 && ch>=65) || (ch<=122 && ch>=97))
      printf("���r���O�^��r��\n"); 
      
   system("pause");
   return 0;
}

/* output---------
�п�J�@�Ӧr��:K
���r���O�^��r��
----------------*/
