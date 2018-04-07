/* hw11_16.c */
#include <stdio.h>
#include <stdlib.h>

struct time
   {
      int hour;
      int minutes;
      double second;
   };   

void display(struct time);
int main(void)
{   
   struct time start={12,32,25.49};
   struct time end={15,12,17.53};
   struct time elaspe={0,0,0.0};  
   
   printf("start=");
   display(start);
   printf("end=");
   display(end);
        
   if(start.second>end.second)        /* 計算秒 */
   {
      elaspe.second=60+end.second-start.second;
      elaspe.minutes--;
   }
   else
      elaspe.second=end.second-start.second;
      
   if(start.minutes>end.minutes)      /* 計算分 */
   {
      elaspe.minutes+=60+end.minutes-start.minutes;
      elaspe.hour--;
   }
   else
      elaspe.minutes+=end.minutes-start.minutes;
     
   elaspe.hour+=end.hour-start.hour;   /* 計算時 */
   
   printf("elaspe=");
   display(elaspe);
                                                                                                                                  
   system("pause");
   return 0;
}

void display(struct time t)
{
   printf("%02d:%02d:%04.2f\n",t.hour,t.minutes,t.second);
}

/* output---------------
start=12:32:25.49
end=15:12:17.53
elaspe=02:39:52.04
----------------------*/
