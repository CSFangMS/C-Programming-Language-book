/* prog7_10, �_��while�j��D9*9���k�� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i=1, j=1;		/* �]�w�j�鱱���ܼƪ���� */
   
   while (i<=9)		/* �~�h�j�� */
   {
      while (j<=9)	/* ���h�j�� */
      {
         printf("%d*%d=%2d  ",i,j,i*j);
         j++;
      }
      printf("\n");
      i++;
      j=1;
   }
   system("pause");
   return 0;
}

