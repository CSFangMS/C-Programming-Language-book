/* prog8_9, �εܥ�������k����k */
#include <stdio.h>
#include <stdlib.h>
double Leibniz(int);				/* �ŧi���Leibniz()���쫬 */
double power(double, int); 		/* �ŧi���power()���쫬 */
int main(void)
{
   int i;
   for(i=1;i<=10000;i++)			/* ��X�e10000�ӣk������� */
       printf("Leibniz(%d)=%12.10f\n",i,Leibniz(i));  
   system("pause");
   return 0;
}

double Leibniz(int n)	/* Leibniz()��ơA�i����k�Ȩ��n��*/
{
   int k;
   double sum=0.;
   for(k=1;k<=n;k++)
      sum=sum+power(-1.0,k-1)/(2*k-1);		/* �ܥ��������� */
   return 4*sum;
}

double power(double base, int n) /* power()���,�i�p��base��n���� */
{
  int i;
   double pow=1.0;
   for(i=1;i<=n;i++)
      pow=pow*base;
   return pow;
}

