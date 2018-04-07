/* hw13_5.c */
#include <stdio.h>
#include <stdlib.h>
double area(double r);
double peri(double r);

int main(void)
{   
   printf("area(2.2)=%5.2f\n",area(2.2)); 
   printf("peri(1.4)=%5.2f\n",peri(1.4)); 
        
   system("pause");
   return 0;
}

/* output---------------------
¥b®|¬° 2.20, area(2.2)=15.21
¥b®|¬° 1.40, peri(1.4)= 8.80
----------------------------*/
