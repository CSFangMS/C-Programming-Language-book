/* hw4_14.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int num;   
   printf("請輸入十進位整數: ");
   scanf("%d",&num);
   
   printf("%d的八進位是 %o, ",num,num);
   printf("十六進位是 %x\n",num);
   
   system("pause");
   return 0;
}

/* output-----------------------
請輸入十進位整數: 30
30的八進位是 36, 十六進位是 1e
------------------------------*/
