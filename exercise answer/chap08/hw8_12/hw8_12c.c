/* hw8_12c.c */
#include <stdio.h>
#include <stdlib.h>
double my_fun(int);
int power(int,int);
int main(void)
{     
   int n=0;
   do   
      n++;
   while(my_fun(n)<=0.99999);
   printf("n=%d¡Amy_fun(%d)>0.99999\n",n,n);
      
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

/* output----------------
n=17¡Amy_fun(17)>0.99999
-----------------------*/
