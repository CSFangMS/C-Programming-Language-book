/* prog8_8, �P�ɩI�s�h�Ө�� */
#include <stdio.h>
#include <stdlib.h>
void sum(int), fac(int);		/* �w�q��ƪ��쫬 */
int main(void)
{
   fac(5);			/* �I�sfac()��� */
   sum(5); 			/* �I�ssum()��� */

   system("pause");
   return 0;
}

void fac(int a)		/* �ۭq���fac()�A�p��a! */
{
   int i,total=1;
   for(i=1;i<=a;i++)
      total*=i;
   printf("1*2*...*%d=%d\n",a,total);	/* �L�Xa!�����G */
}

void sum(int a)		/* �ۭq���sum()�A�p��1+2+...+a�����G*/
{
   int i,total=0;
   for(i=1;i<=a;i++)
      total+=i;
   printf("1+2+...+%d=%d\n",a,total);	/* �L�X�[�`�����G */
}

