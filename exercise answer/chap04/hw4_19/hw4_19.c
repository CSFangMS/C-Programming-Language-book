/* hw4_19.c */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{
   int num;
   char ch;
   
   printf("�п�J�@�Ӿ��: "); 
   scanf("%d",&num);
   fflush(stdin);
   
   printf("�п�J�@�Ӧr��: ");
   ch=getchar();  
   printf("num=%d, ascii of ch=%d\n",num,ch);
   
   system("pause");
   return 0;
}

/* output-----------------
�п�J�@�Ӿ��: 2332
�п�J�@�Ӧr��: k
num=2332, ascii of ch=107
------------------------*/
