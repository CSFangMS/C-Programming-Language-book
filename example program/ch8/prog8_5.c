/* prog8_5, �D����Ȩ��abs() */
#include <stdio.h>
#include <stdlib.h>
int abs(int);			/* �ŧi���abs()���쫬 */
int main(void)
{
   int i;
   printf("Input an integer:");		/* ��J��� */
   scanf("%d",&i);
   printf("abs(%d)=%d\n",i,abs(i));	/* �L�X����� */

   system("pause");
   return 0;
}

int abs(int n)	/* �ۭq�����abs(),�Ǧ^����� */
{
   if (n<0)
      return -n;
   else
      return n;
}

