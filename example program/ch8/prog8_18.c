/* prog8_18, �ϰ��R�A�ܼƨϥΪ��d�� */
#include <stdio.h>
#include <stdlib.h>
void func(void);		/* �ŧifunc()��ƪ��쫬 */
int main(void)
{
   func();			/* �I�s���func() */
   func();			/* �I�s���func() */
   func();			/* �I�s���func() */

   system("pause");
   return 0;
}

void func(void)	 
{
   static int a=100;				/* �ŧi�R�A�ܼ�a */
   printf("In func(),a=%d\n",a);   /* �L�Xfunc()��Ƥ�a���� */
   a+=200;
}

