/* hw9_26.c */
#include <stdio.h>
#include <stdlib.h>
int length(char str[]);
int main(void)
{   
   char str[100];
   
   printf("�п�J�@�Ӧr��:");
   gets(str); 
   printf("�@��%d�Ӧr��\n",length(str)); 
	
   system("pause");
   return 0;
}

int length(char str[])
{
   int i=0,cnt=0;
   while(str[i++]!='\0')
      cnt++;
   return cnt;
}

/* output------------------------
�п�J�@�Ӧr��:Hello C language
�@��16�Ӧr��
-------------------------------*/
