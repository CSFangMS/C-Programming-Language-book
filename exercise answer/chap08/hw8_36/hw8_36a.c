/* hw8_36a.c */
#include <stdio.h>
#include <stdlib.h>
#include "C:\my_math.h"
int main(void)
{    
   int num;
   printf("Input an integer:");
   scanf("%d",&num);
     
   printf("SQUARE(%d)=%d\n",num,SQUARE(num));
   printf("CUBIC(%d)=%d\n",num,CUBIC(num));
   printf("ABS(%d)=%d\n",num,ABS(num));   

   system("pause");
   return 0;
}

/* output------------
Input an integer:-5
SQUARE(-5)=25
CUBIC(-5)=-125
ABS(-5)=5
-------------------*/
