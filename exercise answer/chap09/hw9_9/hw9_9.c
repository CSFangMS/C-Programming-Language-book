/* hw9_9.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{    
   int i,j,sale[2][4],sum[4]={0};
   
   for(i=0;i<2;i++)
      for(j=0;j<4;j++)
      {
         printf("�~�ȭ�%d����%d�u�~�Z:",i+1,j+1); 
         scanf("%d",&sale[i][j]);
      }
  
   printf("***Output***");
   for(i=0;i<2;i++)
   {
      printf("\n�~�ȭ�%d���~�Z���O��",i+1); 
      for(j=0;j<4;j++)
      {
         printf("%d ",sale[i][j]); 
         sum[j]+=sale[i][j];
      }
   }
   printf("\n\n");
   for(i=0;i<4;i++)
      printf("��%d�u���P��q��%d����\n",i+1,sum[i]);
    
   system("pause");
   return 0;
}

/* output------------------------
�~�ȭ�1����1�u�~�Z:30
�~�ȭ�1����2�u�~�Z:35
�~�ȭ�1����3�u�~�Z:26
�~�ȭ�1����4�u�~�Z:32
�~�ȭ�2����1�u�~�Z:33
�~�ȭ�2����2�u�~�Z:34
�~�ȭ�2����3�u�~�Z:30
�~�ȭ�2����4�u�~�Z:29
***Output***
�~�ȭ�1���~�Z���O��30 35 26 32
�~�ȭ�2���~�Z���O��33 34 30 29

��1�u���P��q��63����
��2�u���P��q��69����
��3�u���P��q��56����
��4�u���P��q��61����
-------------------------------*/
