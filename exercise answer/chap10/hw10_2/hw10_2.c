/* hw10_2.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{   
   float num=4.2f;
   int a1=4, a2=12;
   
   printf("num=%3.1f, ��}��%d\n",num,&num);
   printf("a1=%4d, ��}��%d\n",a1,&a1);
   printf("a2=%4d, ��}��%d\n",a2,&a2);
       
   system("pause");
   return 0;
}

/* output--------------
num=4.2, ��}��2293612
a1=   4, ��}��2293608
a2=  12, ��}��2293604
---------------------*/
