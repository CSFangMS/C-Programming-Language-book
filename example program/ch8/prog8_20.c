/* prog8_20, �ϥ�#define */
#include <stdio.h>
#include <stdlib.h>
#define BEGIN {			/* �w�q�ѧO�W��BEGIN�����j�A��{ */
#define END }			/* �w�q�ѧO�W��END���k�j�A��} */
int main(void)
BEGIN					/* ���檺BEGIN�۷�󥪤j�A�� { */
   int i,j;
   
   for(i=1;i<=5;i++)
   BEGIN				/* ���檺BEGIN�۷�󥪤j�A�� { */
      for(j=1;j<=i;j++)
         printf("*");
      printf("\n");
   END					/* ���檺END�۷��k�j�A�� } */

   system("pause");
   return 0;
END						/* ���檺END�۷��k�j�A�� } */

