/* hw9_13c.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{    
   int i,sum[3]={0},max=sum[0],max_index=0;
   int sale[3][5]={{33,32,56,45,33},{77,33,68,45,23},
                   {43,55,43,67,65}};
  
   for(i=0;i<3;i++)
   {
      printf("�P���%d���P���`���B��",i+1);  
      sum[i]=sale[i][0]*12+sale[i][1]*16+sale[i][2]*10;
      sum[i]+=sale[i][3]*14+sale[i][4]*15;   
      printf("%3d��\n",sum[i]);
      if(max<sum[i])
      {
         max=sum[i];
         max_index=i;
      }
   }
   printf("���̦n�~�Z���O�P���%d\n",max_index+1);
    
   system("pause");
   return 0;
}

/* output---------------------
�P���1���P���`���B��2593��
�P���2���P���`���B��3107��
�P���3���P���`���B��3739��
���̦n�~�Z���O�P���3
----------------------------*/
