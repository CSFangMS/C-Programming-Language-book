/* hw10_11.c */
#include <stdio.h>
#include <stdlib.h>
void add10(int *,int *);
int main(void)
{
   int a=3, b=5;
   
   printf("�I�s���add10()���e: ");
   printf("a=%d, b=%d\n",a,b);    	
   add10(&a,&b);
   printf("�I�s���add10()����: ");
   printf("a=%d, b=%d\n",a,b);
   
   system("pause");
   return 0;
}

void add10(int *p1,int *p2)
{
   *p1=*p1+10;
   *p2=*p2+10;
}

/* output------------------------
�I�s���add10()���e: a=3, b=5
�I�s���add10()����: a=13, b=15
-------------------------------*/
