/* prog9_9, �G���}�C����J��X */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i,j,sale[2][4],sum=0;
		
   for(i=0;i<2;i++)
      for(j=0;j<4;j++)
      {
         printf("�~�ȭ�%d����%d�u�~�Z:",i+1,j+1);
         scanf("%d",&sale[i][j]); 		/* ��J�P��q */
      }
   
   printf("***Output***");
   for(i=0;i<2;i++)				/* ��X�P��q�íp���`�P��q */
   {
      printf("\n�~�ȭ�%d���~�Z���O��",i+1);
      for(j=0;j<4;j++)
      {
         printf("%d  ",sale[i][j]);
         sum+=sale[i][j];
      }
   }
   printf("\n2004�~�`�P��q��%d����\n",sum);
   
   system("pause");
   return 0;
}

