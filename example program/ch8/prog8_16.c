/* prog8_16, �����ܼƪ��d��(�G) */
#include <stdio.h>
#include <stdlib.h>
void func(void);
int a=50;   				/* �w�q�����ܼ�a */ 

int main(void)
{
   int a=100; 			/* �w�q�ϰ��ܼ�a */ 
   printf("�I�sfunc()���e,a=%d\n",a);
   func();		/* �I�s�ۭq����� */
   printf("�I�sfunc()����,a=%d\n",a);

   system("pause");
   return 0;
}

void func(void)	
{
   a=a+300;				/* �o�O�����ܼ�a */ 
	printf("��func()��Ƹ�,a=%d\n",a);
}

