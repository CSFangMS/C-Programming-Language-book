/* prog8_14, �ϰ��ܼƪ��d�ҡ]�G�^*/
#include <stdio.h>
#include <stdlib.h>
void func(void);
int main(void)
{
   int a=100;     /* �ŧimain()��Ƹ̪��ϰ��ܼ�a */

   printf("�I�sfunc()���e,a=%d\n",a);	/* �L�Xmain()��a���� */
   func();		/* �I�s�ۭq����� */
   printf("�I�sfunc()����,a=%d\n",a);	/* �L�Xa���� */

   system("pause");
   return 0;
}


void func(void)		/* ���func() */
{
   int a=300;     	/* �ŧifunc()��Ƹ̪��ϰ��ܼ�a */
   printf("��func()��Ƹ�,a=%d\n",a);	/* �L�Xfunc��Ƥ�a���� */
}

