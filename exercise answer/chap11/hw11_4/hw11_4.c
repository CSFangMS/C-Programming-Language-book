/* hw11_4.c */
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
   struct time start={12,32,25.49};
   struct time end={15,12,17.53};
   struct time elaspe={0,0,0.0};
   
   printf("start=%02d:%02d:%05.2f\n",
           start.hour,start.minutes,start.second);
   printf("end=%02d:%02d:%05.2f\n",
           end.hour,end.minutes,end.second);
     
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
   
   printf("elaspe=%02d:%02d:%05.2f\n",
           elaspe.hour,elaspe.minutes,elaspe.second);
                                                                                                                               
   system("pause");
   return 0;
}

/* output---------------
start=12:32:25.49
end=15:12:17.53
elaspe=02:39:52.04
----------------------*/
