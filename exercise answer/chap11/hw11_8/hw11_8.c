/* hw11_8.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   struct time
   {
      int hour;
      int minutes;
      double second;
   };   
   struct date
   {
      int year;
      int month;
      int day;
      struct time colck;
   };
   struct date now={2004,4,7,{12,50,29.51}};
   
   printf("now=%02d/%02d/%4d  %02d:%02d:%5.2f\n",
           now.month,now.day,now.year,now.colck.hour,
           now.colck.minutes,now.colck.second);
      
   printf("sizeof(now)=%d\n",sizeof(now));
      
   system("pause");
   return 0;
}

/* output-------------------
now=04/07/2004  12:50:29.51
sizeof(now)=32
--------------------------*/
