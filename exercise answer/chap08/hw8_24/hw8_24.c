/* hw8_24.c */
#include <stdio.h>
#include <stdlib.h>
void  counter(void);
int main(void)
{
    counter();
	counter();
	system("pause");
    return 0;
}

void counter(void)
{
   static int n=0;
   printf("counter()已被呼叫%d次了...\n",++n);    
}

/* output------------------
counter()已被呼叫1次了...
counter()已被呼叫2次了...
-------------------------*/
