/* hw11_9.c */
#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int main(void)
{ 
   int i,sum=0;
   struct data
   {
      char name[10];
      int math;
   }student[MAX]={{"Jenny",63},{"Teresa",88},
                  {"Kimi Chen",57},{"Lily Kao",92},
                  {"David",48}};
   struct data high=student[0];
   
   for(i=0;i<MAX;i++)
   {
      if(high.math<student[i].math)
      {
         strcpy(high.name,student[i].name);
         high.math=student[i].math;
      }
   }   
   printf("%s的數學成績%d分是最高分的\n",high.name,high.math);
   
   printf("\n不及格的名單:\n"); 
   for(i=0;i<MAX;i++)
      if(student[i].math<60)
         printf("%s的數學成績=%d\n",student[i].name,
                 student[i].math);
   
   for(i=0;i<MAX;i++)
      sum+=student[i].math;
   printf("\n平均成績=%.2f\n",(float)sum/MAX);
   
   system("pause");
   return 0;
}

/* output------------------------
Lily Kao的數學成績92分是最高分的

不及格的名單:
Kimi Chen的數學成績=57
David的數學成績=48

平均成績=69.60
-------------------------------*/
