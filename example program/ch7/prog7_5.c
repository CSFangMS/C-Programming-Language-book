/* prog7_5, �L�a�j�骺���� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   char ch;
   while(ch!=17)			/* ����U���䤣�OCtrl+q�� */
   {
       ch=getch();			/* �q��L���o�r�� */
       printf("ASCII of ch=%d\n",ch);	/* �L�X���o�r����ASCII�X */
   }
   printf("�z�w���FCtrl+q...\n");
   
   system("pause");
   return 0;
}

