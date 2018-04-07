/* function.c */
#include<stdio.h>
#include <math.h>
#define PI 3.1416
void show(double r);

double peri(double r)
{
   show(r);
   return (2*PI*r);
}

double area(double r)
{
   show(r);
   return (PI*pow(r,2.0));
}

void show(double r)
{
   printf("¥b®|¬°%5.2f, ",r); 
}
