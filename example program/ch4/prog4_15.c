/* prog4_15, ��J�r�� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   char name[10];		/* �ŧi�r���}�C */

   printf("What's your name: ");
   scanf("%s",name);		/* ��J�r��A�åѦr���}�Cname�ұ��� */
   printf("Hi, %s, How are you?\n",name); 	/* �L�X�r�ꪺ���e */
   system("pause");
   return 0;
}

