/* prog8_23, const����r�ϥΪ��d�� */
#include <stdio.h>
#include <stdlib.h>
const double pi=3.14;		/* �ŧipi��double���A���`�� */
double area(double);
int main(void)
{   
   /* �Y�b���B�]�wpi=3.1416�A�h�sĶ�ɷ|�o�Ϳ��~ */  
   printf("pi=%4.2f, area()=%6.2f\n",pi,area(2.0));

   system("pause");
   return 0;
}

double area(double r)
{
   return pi*r*r;
}

