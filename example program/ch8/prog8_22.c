/* prog8_22, �ϥΫe�m�B�z���өw�q�ƾǱ`�� */
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14			/* �w�qPI��3.14 */
double area(double);
int main(void)
{   
   printf("PI=%4.2f, area()=%6.2f\n",PI,area(2.0));
   
   system("pause");
   return 0;
}

double area(double r)
{
   return PI*r*r;
}

