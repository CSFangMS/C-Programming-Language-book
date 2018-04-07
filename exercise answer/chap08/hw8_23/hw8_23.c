/* hw8_23.c */
#include <stdio.h>
#include <stdlib.h>
int f(int);
int main(void)
{
   printf("f(5)=%d\n",f(5));
   system("pause");
   return 0;
}

int f(int n)
{
	if(n==0) 
	   return 3;
	else
	   return (2*f(n-1)-5);
}

/* output----
f(5)=-59
-----------*/
