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
   printf("%s���ƾǦ��Z%d���O�̰�����\n",high.name,high.math);
   
   printf("\n���ή檺�W��:\n"); 
   for(i=0;i<MAX;i++)
      if(student[i].math<60)
         printf("%s���ƾǦ��Z=%d\n",student[i].name,
                 student[i].math);
   
   for(i=0;i<MAX;i++)
      sum+=student[i].math;
   printf("\n�������Z=%.2f\n",(float)sum/MAX);
   
   system("pause");
   return 0;
}

/* output------------------------
Lily Kao���ƾǦ��Z92���O�̰�����

���ή檺�W��:
Kimi Chen���ƾǦ��Z=57
David���ƾǦ��Z=48

�������Z=69.60
-------------------------------*/
