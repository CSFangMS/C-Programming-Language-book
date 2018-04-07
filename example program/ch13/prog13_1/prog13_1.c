/* prog13_1, �j���{�����d�� */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>   		/*  �t�Amath.h���Y�� */
#define PI 3.1416
double area(double r);
double peri(double r);
void show(double r);
int main(void)      		/* �w�qmain()��� */
{
   printf("area(2.2)=%5.2f\n",area(2.2));
   printf("peri(1.4)=%5.2f\n",peri(1.4));
   system("pause");
   return 0;
}

double area(double r)	/* �ۭq���area()�A�p��ꭱ�n */
{
   show(r);
   return (PI*pow(r,2.0)); /* pow(r,2.0)�i�p��r������ */
}

double peri(double r)     /* �ۭq���peri()�A�p���P�� */
{
   show(r);    
   return (2*PI*r);   
}

void show(double r)     	/* �ۭq���show()�A�i��ܥb�| */
{
   printf("�b�|��%5.2f, ",r); 
}
