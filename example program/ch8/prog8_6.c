/* prog8_6, �p�� x��n���� */
#include <stdio.h>
#include <stdlib.h>
double power(double, int);	/* �ŧi���power()���쫬 */
int main(void)
{
   double x;		/* x������ */
   int n;		/* n�O���� */

   printf("�п�J���ƻP����:");	
   scanf("%lf,%d",&x,&n); 	/* ��J���ƻP���� */
   printf("%lf��%d����=%lf\n",x,n,power(x,n)); 

   system("pause");
   return 0;
}

double power(double base, int n)   /* power()��ƪ��w�q */
{
   int i;
   double pow=1.0;
   for(i=1;i<=n;i++)		/* for() �j��A�ΨӱN���Ƴs��n�� */
      pow=pow*base;
   return pow;
}

