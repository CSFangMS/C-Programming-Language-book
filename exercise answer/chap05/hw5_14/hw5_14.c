/* hw5_14.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{    
   double mile,km;
   
   printf("請輸入公里數:");
   scanf("%lf",&km);
   
   mile=1/1.6*km;
   
   printf("%.2f公里=%.2f英哩\n",km,mile); 
   
   system("pause");
   return 0;
}

/* output----------------
請輸入公里數:16
16.00公里=10.00英哩
-----------------------*/
