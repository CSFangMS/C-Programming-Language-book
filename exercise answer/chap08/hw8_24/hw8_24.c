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
   printf("counter()�w�Q�I�s%d���F...\n",++n);    
}

/* output------------------
counter()�w�Q�I�s1���F...
counter()�w�Q�I�s2���F...
-------------------------*/
