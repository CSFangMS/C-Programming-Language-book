/* hw4_17c.c, 修改hw4_17--輸入字串的錯誤 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   char ch1,ch2;

   printf("請輸入第一個字元:");
   scanf("%c",&ch1);
   fflush(stdin);
   
   printf("請輸入第二個字元:");
   scanf("%c",&ch2);
   printf("ch1=%c, ch2=%c\n",ch1,ch2);
   
   system("pause");
   return 0;
}

/* output----------
請輸入第一個字元:c
請輸入第二個字元:d
ch1=c, ch2=d
-----------------*/
