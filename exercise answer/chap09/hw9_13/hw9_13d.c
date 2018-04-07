/* hw9_13d.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{    
   int i,sum[5]={0},max=sum[0],max_index=0;
   int sale[3][5]={{33,32,56,45,33},{77,33,68,45,23},
                   {43,55,43,67,65}};
                   
   printf("產品A的銷售總金額為");                 
   for(i=0;i<3;i++)     
      sum[0]+=sale[i][0]*12;
   printf("%3d元\n",sum[0]);
   
   printf("產品B的銷售總金額為");                 
   for(i=0;i<3;i++)     
      sum[1]+=sale[i][1]*16;
   printf("%3d元\n",sum[1]);
   
   printf("產品C的銷售總金額為");                 
   for(i=0;i<3;i++)     
      sum[2]+=sale[i][2]*10;
   printf("%3d元\n",sum[2]);
   
   printf("產品D的銷售總金額為");                 
   for(i=0;i<3;i++)     
      sum[3]+=sale[i][3]*14;
   printf("%3d元\n",sum[3]);
   
   printf("產品E的銷售總金額為");                 
   for(i=0;i<3;i++)     
      sum[4]+=sale[i][4]*15;
   printf("%3d元\n",sum[4]);
   
   for(i=0;i<5;i++)
      if(max<sum[i])
      {
         max=sum[i];
         max_index=i;
      }
   printf("銷售總金額最多的是產品%c\n",max_index+65); 
     
   system("pause");
   return 0;
}

/* output---------------------
產品A的銷售總金額為1836元
產品B的銷售總金額為1920元
產品C的銷售總金額為1670元
產品D的銷售總金額為2198元
產品E的銷售總金額為1815元
銷售總金額最多的是產品D
----------------------------*/
