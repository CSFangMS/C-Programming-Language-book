/* prog7_11, �Q�α_���j��L�X�T���� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i,j,n=6;			/* �]�w�j���� */

   for (i=1;i<=n;i++)		/* �~�h�j��M�w���@�C�n�L�P�� */
   {
      for (j=1;j<=i;j++)	/* ���h�j��L�X*�P�� */
         printf("*");
      printf("\n");
   }

   system("pause");
   return 0;
}

