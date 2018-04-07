/* hw10_6.c */
#include <stdio.h>
#include <stdlib.h>
void show(int,int,int *);
int main(void)
{   
   int a=12,b=7,*ptr;
   
   printf("a=%2d, b=%2d\n",a,b);
   show(a,b,ptr);
   ptr=&a;
   show(a,b,ptr);
   *ptr=19;
   show(a,b,ptr);
   ptr=&b;
   show(a,b,ptr);
   b=16;
   show(a,b,ptr);
   *ptr=12;
   show(a,b,ptr);
   a=17;
   show(a,b,ptr);
   ptr=&a;
   show(a,b,ptr);
   a=b;
   show(a,b,ptr);
   *ptr=63;
   show(a,b,ptr);
       
   system("pause");
   return 0;
}

void show(int a,int b,int *pt)
{
   printf("a=%2d, b=%2d, ",a,b);
   printf("ptr=%p, *ptr=%2d\n",pt,*pt);
}
