/* hw10_13.c �u*�v�P�u++�v�B��l�u�����Ǫ���� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int num[]={14,23,32,62,19};
   int *p1,*p2;
   p1=p2=num;
   
   *p1++;
   printf("*p1=%d\n",*p1);
   
   (*p2)++;
   printf("*p2=%d\n",*p2);
   
   system("pause");
   return 0;
}

/* output---
*p1=23
*p2=15
----------*/
