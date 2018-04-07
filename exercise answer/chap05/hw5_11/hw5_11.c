/* hw5_11.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{    
   double f,c;
   
   printf("請輸入攝氏溫度:");
   scanf("%lf",&c);
   
   f=(9/5.0)*c+32;
   
   printf("攝氏%.2f度=華氏%.2f度\n",c,f); 
   
   system("pause");
   return 0;
}

/* output----------------
請輸入攝氏溫度:32
攝氏32.00度=華氏89.60度
-----------------------*/
