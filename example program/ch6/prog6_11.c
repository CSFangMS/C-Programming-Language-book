/* prog6_11, switch�ԭz-�H���P����ܭȨӳB�z�ۦP���ԭz */
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
         break;
      case 'b':	/* ��Jb��B�ɦL�XGood! */
      case 'B':
         printf("Good!\n");
         break;
      case 'c':	/* ��Jc��C�ɦL�XBe study hard! */
      case 'C':
         printf("Be study hard!\n");
         break;
      default:	/* ��J��L�r���ɦL�XFailed! */
         printf("Failed!\n");
   }
   system("pause");
   return 0;
}

