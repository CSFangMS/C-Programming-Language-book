/* prog8_24, �ϥΥ������d�� */
#include <stdio.h>
#include <stdlib.h>
#define SQUARE n*n		/* �w�q����SQUARE��n*n */
int main(void)
{
   int n;
   printf("Input an integer:");
   scanf("%d",&n);
   printf("%d*%d=%d\n",n,n,SQUARE);  /* �p��æL�Xn������ */

   system("pause");
   return 0;
}

