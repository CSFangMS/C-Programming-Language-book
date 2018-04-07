/* hw9_26.c */
#include <stdio.h>
#include <stdlib.h>
int length(char str[]);
int main(void)
{   
   char str[100];
   
   printf("請輸入一個字串:");
   gets(str); 
   printf("共有%d個字元\n",length(str)); 
	
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
請輸入一個字串:Hello C language
共有16個字元
-------------------------------*/
