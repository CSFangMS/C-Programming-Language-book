/* prog8_7, ��ƪ���M */
#include <stdio.h>
#include <stdlib.h>
int is_prime(int);			/* �ŧi���is_prime()���쫬 */
int main(void)
{
   int i;
   for(i=2;i<=30;i++)			/* ��X�p��30���Ҧ���� */
      if(is_prime(i))         	/* �I�sis_prime()��� */
         printf("%3d",i); 		/* �p�G�O���,�K�⦹�ƦL�X�� */
   printf("\n");  
   system("pause");
   return 0;
}

int is_prime(int num)	/* is_prime()���,�i����num�O�_����� */
{
   int i;
   for(i=2;i<=num-1;i++)
      if(num%i==0)
          return 0;
   return 1;
}

