/* hw5_14.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{    
   double mile,km;
   
   printf("�п�J������:");
   scanf("%lf",&km);
   
   mile=1/1.6*km;
   
   printf("%.2f����=%.2f�^��\n",km,mile); 
   
   system("pause");
   return 0;
}

/* output----------------
�п�J������:16
16.00����=10.00�^��
-----------------------*/
