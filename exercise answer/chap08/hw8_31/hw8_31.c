/* hw8_31.c */
#include <stdio.h>
#include <stdlib.h>
#define f(X) 4*(X)*(X)+6*(X)-5
int main(void)
{   
   printf("f(1.0)=%.2f\n",f(1.0));
   printf("f(2.2)=%.2f\n",f(2.2));
   printf("f(3.14)=%.4f\n",f(3.14));
   
   system("pause");
   return 0;
}

/* output--------
f(1.0)=5.00
f(2.2)=27.56
f(3.14)=53.2784
---------------*/
