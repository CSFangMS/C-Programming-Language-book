/* hw11_20.c */
#include <stdio.h>
#include <stdlib.h>
struct data
{
   char name[10];
   int math;
};
void display(SCORE);
int main(void)
{   
   typedef struct data SCORE;
   SCORE s1={"Jenny",74};
   display(s1);
   
   system("pause");
   return 0;
}
void display(SCORE st)
{
   printf("�ǥͩm�W: %s\n",st.name);
   printf("�ƾǦ��Z: %d\n",st.math); 
}

/* output---------------

----------------------*/
