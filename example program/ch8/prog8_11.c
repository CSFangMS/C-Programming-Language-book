/* prog8_11, ���j���power(b,n)�A�p��b��n���� */
#include <stdio.h>
#include <stdlib.h>
int power(int,int);     /* �j���power()���쫬 */
int main(void)
{
   printf("power(2,3)=%d\n", power(2,3));
   system("pause");	
   return 0;
}

int power(int b,int n)	/* �ۭq���power()�A�p��b��n���� */
{
   if(n==0)
      return 1;
   else
      return (b*power(b,n-1));
}

