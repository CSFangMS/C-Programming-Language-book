/* prog8_10, ���j��ơA�p�ⶥ�� */
#include <stdio.h>
#include <stdlib.h>
int fac(int);     /* ���j���fac()���쫬 */
int main(void)
{
   printf("fac(4)=%d\n", fac(4));   /* �I�s���j���fac() */

   system("pause");
   return 0;
}

int fac(int n)	/* �ۭq���fac()�A�p��n! */
{
   if(n>0)
      return (n*fac(n-1));
   else
      return 1;
}

