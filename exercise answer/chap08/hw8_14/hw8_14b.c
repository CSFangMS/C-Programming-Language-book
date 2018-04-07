/* hw8_14b.c */
#include <stdio.h>
#include <stdlib.h>
double my_fun(double,int), power(double,int);
int fac(int);
int main(void)
{     
   int n=0;
   do   
      n++;
   while(my_fun(0.1,n)-my_fun(0.1,n-1)>=0.00001);
   printf("n=%d¡Amy_fun(0.1,%d)-my_fun(0.1,%d-1)<0.00001\n",n,n,n);
      
   system("pause");
   return 0;
}

double my_fun(double x,int n)
{
   int k;
   double sum=0.0;
   for(k=1;k<=n;k++)
      sum+=power(x,k)/fac(k);
   return sum;
}

int fac(int a)
{
   int i,total=1;
   for(i=1;i<=a;i++)
      total*=i;
   return total;
}

double power(double base, int n)
{
   int i;
   double pow=1.0;
   for(i=1;i<=n;i++)
      pow*=base;
   return pow;
}

/* output-----------------------------------
n=4¡Amy_fun(0.1,4)-my_fun(0.1,4-1)<0.00001
------------------------------------------*/
