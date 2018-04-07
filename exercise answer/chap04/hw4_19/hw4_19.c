/* hw4_19.c */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{
   int num;
   char ch;
   
   printf("請輸入一個整數: "); 
   scanf("%d",&num);
   fflush(stdin);
   
   printf("請輸入一個字元: ");
   ch=getchar();  
   printf("num=%d, ascii of ch=%d\n",num,ch);
   
   system("pause");
   return 0;
}

/* output-----------------
請輸入一個整數: 2332
請輸入一個字元: k
num=2332, ascii of ch=107
------------------------*/
