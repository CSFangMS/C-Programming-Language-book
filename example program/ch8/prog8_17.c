/* prog8_17, �����ܼƪ��ϥνd�ҡ]�T�^ */
#include <stdio.h>
#include <stdlib.h>
double pi=3.14;					/* �ŧi�����ܼ�pi */
void peri(double);
void area(double);
int main(void)
{
   double r=1.0;
   printf("pi=%.2f\n",pi);		/* ��main()�̨ϥΥ����ܼ� pi*/
   printf("radius=%.2f\n",r);
   peri(r);		/* �I�s�ۭq����� */
   area(r);

   system("pause");
   return 0;
}

void peri(double r)	/* �ۭq�����peri()�A�L�X��P */
{
   printf("��P��=%.2f\n",2*pi*r);	/* ��peri()�̨ϥΥ����ܼ�pi */
}

void area(double r)	/* �ۭq�����area()�A�L�X�ꭱ�n */
{
   printf("�ꭱ�n=%.2f\n",pi*r*r);	/* ��area()�̨ϥΥ����ܼ�pi */
}

