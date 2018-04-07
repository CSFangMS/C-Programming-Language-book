/* hw8_14a.c */
#include <stdio.h>
#include <stdlib.h>
double my_fun(double,int), power(double,int);
int fac(int);
int main(void)
{     
   printf("my_fun(0.1,5)=%f\n",my_fun(0.1,5));
   printf("my_fun(0.1,8)=%f\n",my_fun(0.1,8));
   printf("my_fun(0.2,8)=%f\n",my_fun(0.2,8));
      
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

/* output---------------
my_fun(0.1,5)=0.105171
my_fun(0.1,8)=0.105171
my_fun(0.2,8)=0.221403
----------------------*/
