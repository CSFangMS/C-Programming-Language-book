/* prog8_1, ²�檺��ƽd�� */
#include <stdio.h>
#include <stdlib.h>
void star(void);    			/* star()��ƪ��쫬 */ 
int main(void)
{
   star();					/* �I�sstar��� */
   printf("�w��ϥ�C�y��\n"); 
   star();					/* �I�sstar��� */   
   system("pause");
   return 0;
}

void star(void)
{
   printf("*************\n");  	/* �L�X13�ӬP�� */ 
   return;
}

