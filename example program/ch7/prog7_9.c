/* prog7_9, �_��for�j��L�X�E�E���k�� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i,j;

   for (i=1;i<=9;i++)		/* �~�h�j�� */
   {
      for (j=1;j<=9;j++)	/* ���h�j�� */
         printf("%d*%d=%2d  ",i,j,i*j);
      printf("\n");
   }

   system("pause");
   return 0;
}

