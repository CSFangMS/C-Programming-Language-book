/* hw8_3.c */
#include <stdio.h>
#include <stdlib.h>
int cub(int);
int main(void)
{  
   int x=5;  
   printf("%d^3=%d\n",x,cub(x));
      
   system("pause");
   return 0;
}

int cub(int x)
{
   int i;
   int sum=1;
   for(i=1;i<=3;i++)
      sum*=x;
   return sum;
}

/* output-----
5^3=125
------------*/
