/* prog8_12,�O��ƦC */
#include <stdio.h>
#include <stdlib.h>
int fib(int);			/* fib()��ƪ��쫬 */
int main(void)
{
   int n;
   for(n=1;n<=10;n++)			/* �p��e10�ӶO��ƦC */
      printf("fib(%d)=%d\n",n,fib(n));		

   system("pause");
   return 0;
}

int fib(int n) 		/* �w�q���fib()�A�p��O��ƦC����n�Ӽ� */
{	
   if(n==1 || n==2)	/* �p�Gn=1��n=2�A�h�Ǧ^1 */
      return 1;
   else				/* �_�h�Ǧ^ fib(n-1)+fib(n-2) */
      return (fib(n-1)+fib(n-2));
}

