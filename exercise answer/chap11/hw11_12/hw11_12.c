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
      printf("�ǥͩm�W: ");
      gets((student+i)->name);
      printf("�ƾǦ��Z: ");
      scanf("%d",&(student+i)->math);
      fflush(stdin); 
   }
   
   for(i=0;i<MAX;i++)
      printf("%s���ƾǦ��Z=%d\n",(student+i)->name,
             (student+i)->math);
   
   system("pause");
   return 0;
}

/* output-------------
�ǥͩm�W: Jenny
�ƾǦ��Z: 85
�ǥͩm�W: Kimi Wu
�ƾǦ��Z: 74
Jenny���ƾǦ��Z=85
Kimi Wu���ƾǦ��Z=74
---------------------*/
