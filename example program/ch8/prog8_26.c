/* prog8_26, �ϥΥ����`�������~ */
#include <stdio.h>
#include <stdlib.h>
#define SQUARE(X) X*X			/* �w�q����SQUARE(X)��X*X */
int main(void)
{
   int n;
   printf("Input an integer:");
   scanf("%d",&n);
   printf("%d*%d=%d\n",n+1,n+1,SQUARE(n+1));	/* �L�Xn+1������ */

   system("pause");
   return 0;
}

