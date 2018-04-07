/* hw11_1.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   struct data
   {
      int num;
      char ch;
      double dist;
   }aaa;
   
   printf("sizeof(aaa)=%d\n",sizeof(aaa));
   
   system("pause");
   return 0;
}

/* output------
sizeof(aaa)=16
-------------*/
