/* prog11_14, �C�|���A���ϥνd�� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{	
   char key;		/* �Ψ��x�s���䪺��T */
   enum color	/* �w�q�C�|���Acolor */
   {
      red=114,	/* �N�C�|�`��red�]�w��114�A�Y�r��r��ASCII�X */
      green=103, 	/* �N�C�|�`��green�]�w��103 (g��ASCII�X) */
      blue=98	/* �N�C�|�`��blue�]�w��98 (b��ASCII�X) */
   } shirt;		/* �ŧi�C�|���A���ܼ�shirt */
	
   do	
   {
      printf("�п�Jr,g��b: ");
      scanf("%c",&key);	/* Ū�J�@�Ӧr�� */
      fflush(stdin);		/* �M�Žw�İϤ������ */
   } while((key!=red)&&(key!=green)&&(key!=blue));

   shirt=key;			/* �Nkey���ȫ��w��shirt�ܼƦs�� */
	
   switch(shirt)			/* �ھ�shirt���ȦL�X�r�� */
   {
      case red:
         printf("�z��ܤF����\n");
         break;
      case green:
       	 printf("�z��ܤF���\n");
         break;
      case blue:
       	 printf("�z��ܤF�Ŧ�\n");
         break;         
   }
   system("pause");
   return 0;
}

