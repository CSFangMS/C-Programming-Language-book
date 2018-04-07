/* hw7_29.c, break 敘述的練習 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int input,cnt=0,passwd=6128;
   
   while(1)
   {
      printf("請輸入密碼: ");
      scanf("%d", &input);
      cnt++;
      if(input==passwd)
      {
         printf("密碼輸入正確，歡迎使用本系統!!\n");  
         break;
      }        
      if(cnt>=3)
      {
         printf("密碼輸入超過三次!!\n");
         break;
      } 
   }      
   
   system("pause");
   return 0;
}

/* output-----------------------
請輸入密碼: 1234
請輸入密碼: 6128
密碼輸入正確，歡迎使用本系統!!
------------------------------*/
