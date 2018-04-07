/* hw11_3.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   struct date
   {
      int year;
      int month;
      int day;
   };
   
   printf("sizeof(struct date)=%d\n",sizeof(struct date));
      
   system("pause");
   return 0;
}

/* output---------------
sizeof(struct date)=12
----------------------*/
