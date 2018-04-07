/* hw9_13a.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{    
   int i,sum[3]={0};
   int sale[3][5]={{33,32,56,45,33},{77,33,68,45,23},
                   {43,55,43,67,65}};
  
   for(i=0;i<3;i++)
   {
      printf("銷售員%d的銷售總金額為",i+1);  
      sum[i]=sale[i][0]*12+sale[i][1]*16+sale[i][2]*10;;
      sum[i]+=sale[i][3]*14+sale[i][4]*15;   
      printf("%3d元\n",sum[i]);
   }
    
   system("pause");
   return 0;
}

/* output---------------------
銷售員1的銷售總金額為2593元
銷售員2的銷售總金額為3107元
銷售員3的銷售總金額為3739元
----------------------------*/
