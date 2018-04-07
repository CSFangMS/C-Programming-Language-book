/* hw8_12a.c */
#include <stdio.h>
#include <stdlib.h>
double my_fun(int);
int power(int,int);
int main(void)
{     
   printf("my_fun(3)=%f\n",my_fun(3));
   printf("my_fun(4)=%f\n",my_fun(4));
   printf("my_fun(5)=%f\n",my_fun(5));
   printf("my_fun(6)=%f\n",my_fun(6));
      
   system("pause");
   return 0;
}

double my_fun(int n)
{
   int k;
   double sum=0.0;
   for(k=1;k<=n;k++)
      sum+=1.0/power(2,k);
   return sum;
}

int power(int base, int n)
{
   int i;
   int pow=1;
   for(i=1;i<=n;i++)
      pow*=base;
   return pow;
}

/* output------------
my_fun(3)=0.875000
my_fun(4)=0.937500
my_fun(5)=0.968750
my_fun(6)=0.984375
--------------------*/
