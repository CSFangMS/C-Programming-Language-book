/* hw5_11.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{    
   double f,c;
   
   printf("�п�J���ū�:");
   scanf("%lf",&c);
   
   f=(9/5.0)*c+32;
   
   printf("���%.2f��=�ؤ�%.2f��\n",c,f); 
   
   system("pause");
   return 0;
}

/* output----------------
�п�J���ū�:32
���32.00��=�ؤ�89.60��
-----------------------*/
