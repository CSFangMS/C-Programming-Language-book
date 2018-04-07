/* hw8_36b.c */
#include <stdio.h>
#include <stdlib.h>
#include "C:\my_math.h"
int main(void)
{    
   float x,y;
   printf("Input first number:");
   scanf("%f",&x);
   printf("Input second number:");
   scanf("%f",&y); 
    
   printf("AVERAGE(%.2f,%.2f)=%.2f\n",x,y,AVERAGE(x,y));
   printf("PRODUCT(%.2f,%.2f)=%.2f\n",x,y,PRODUCT(x,y));
   
   system("pause");
   return 0;
}

/* output----------------
Input first number:3.8
Input second number:2.4g
AVERAGE(3.80,2.40)=3.10
PRODUCT(3.80,2.40)=9.12
-----------------------*/
