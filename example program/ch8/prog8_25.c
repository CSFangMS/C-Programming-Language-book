/* prog8_25, �a���޼ƪ����� */
#include <stdio.h>
#include <stdlib.h>
#define SQUARE(X) X*X	/* �w�q����SQUARE(X)��X*X */
int main(void)
{
   int n;
   printf("Input an integer:");
   scanf("%d",&n);
   printf("%d*%d=%d\n",n,n,SQUARE(n));  /* �p��æL�Xn������ */

   system("pause");
   return 0;
}

