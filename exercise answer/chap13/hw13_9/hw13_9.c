/* hw13_9.c */
#include <stdio.h>
#include <stdlib.h>
double pi=3.14;
void peri(double);
void area(double);
int main(void)
{
   double r=1.0;
   printf("pi=%.2f\n",pi);
   printf("radius=%.2f\n",r);
   peri(r);
   area(r);

   system("pause");
   return 0;
}

/* output-----
pi=3.14
radius=1.00
��P��=6.28
�ꭱ�n=3.14
------------*/
