/* hw4_17c.c, �ק�hw4_17--��J�r�ꪺ���~ */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   char ch1,ch2;

   printf("�п�J�Ĥ@�Ӧr��:");
   scanf("%c",&ch1);
   fflush(stdin);
   
   printf("�п�J�ĤG�Ӧr��:");
   scanf("%c",&ch2);
   printf("ch1=%c, ch2=%c\n",ch1,ch2);
   
   system("pause");
   return 0;
}

/* output----------
�п�J�Ĥ@�Ӧr��:c
�п�J�ĤG�Ӧr��:d
ch1=c, ch2=d
-----------------*/
