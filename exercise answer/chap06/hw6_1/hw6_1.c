/* hw6_1.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{    
   char ch;
   
   printf("請輸入一個字元:");
   scanf("%c",&ch);
   
   if(ch<=57 && ch>=48)
      printf("此字元是數字\n"); 
   if((ch<=90 && ch>=65) || (ch<=122 && ch>=97))
      printf("此字元是英文字母\n"); 
      
   system("pause");
   return 0;
}

/* output---------
請輸入一個字元:K
此字元是英文字母
----------------*/
