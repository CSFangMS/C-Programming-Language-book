/* hw10_9.c */
#include <stdio.h>
#include <stdlib.h>
void address(float *);
int main(void)
{   
   float pi=3.14f;
   float *ptr=&pi;
   
   address(&pi);
   address(ptr);
       
   system("pause");
   return 0;
}

void address(float *p1)
{
   printf("���}%p���A�x�s���ܼƤ��e��%.2f\n",p1,*p1); 
}

/* output-------------------------------
���}0022FF6C���A�x�s���ܼƤ��e��3.14
���}0022FF6C���A�x�s���ܼƤ��e��3.14
--------------------------------------*/
