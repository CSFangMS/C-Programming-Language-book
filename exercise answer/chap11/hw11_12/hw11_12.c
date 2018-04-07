/* hw11_12.c */
#include <stdio.h>
#include <stdlib.h>
#define MAX 2
int main(void)
{ 
   int i;
   struct data
   {
      char name[10];
      int math;
   }student[MAX];
   
   for(i=0;i<MAX;i++)
   {
      printf("學生姓名: ");
      gets((student+i)->name);
      printf("數學成績: ");
      scanf("%d",&(student+i)->math);
      fflush(stdin); 
   }
   
   for(i=0;i<MAX;i++)
      printf("%s的數學成績=%d\n",(student+i)->name,
             (student+i)->math);
   
   system("pause");
   return 0;
}

/* output-------------
學生姓名: Jenny
數學成績: 85
學生姓名: Kimi Wu
數學成績: 74
Jenny的數學成績=85
Kimi Wu的數學成績=74
---------------------*/
