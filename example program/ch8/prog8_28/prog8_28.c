/* prog8_28, �ϥΦۭq�����Y��area.h */
#include <stdio.h>
#include <stdlib.h>
#include "area.h" 
int main(void)
{
   float base, height;

   printf("�п�J�T���Ϊ���:");
   scanf("%f",&base);
   printf("�п�J�T���Ϊ���:");
   scanf("%f",&height);
   printf("�T���έ��n��:%.2f\n",TRIANGLE(base,height));
 
   system("pause");
   return 0;
}

