/* prog8_15, �����ܼƪ��d��(�@) */
#include <stdio.h>
#include <stdlib.h>
void func(void);		/* ���func()���쫬 */
int a;   			/* �ŧi�����ܼ�a */ 		
int main(void)
{
   a=100;			/* �]�w�����ܼ�a���Ȭ�100 */	
   printf("�I�sfunc()���e,a=%d\n",a);	
   func();			/* �I�s�ۭq����� */
   printf("�I�sfunc()����,a=%d\n",a);

   system("pause");
   return 0;
}

void func(void)		/* �ۭq�����func() */
{
   a=300;			/* �]�w�����ܼ�a���Ȭ�300 */	
   printf("��func()��Ƹ�,a=%d\n",a);
}

