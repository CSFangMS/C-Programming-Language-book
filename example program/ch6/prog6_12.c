/* prog6_12, �ѤF�[�Wbreak��switch�ԭz */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   char grade;
   printf("Input grade:");
   scanf("%c",&grade);

   switch(grade)
   {
      case 'a':	/* ��Ja��A�ɦL�XExcellent! */
      case 'A':
         printf("Excellent!\n");
      case 'b':	/* ��Jb��B�ɦL�XGood! */
      case 'B':
         printf("Good!\n");
      case 'c':	/* ��Jc��C�ɦL�XBe study hard! */
      case 'C':
         printf("Be study hard!\n");
      default:	/* ��J��L�r���ɦL�XFailed! */
         printf("Failed!\n");
   }
   system("pause");
   return 0;
}

