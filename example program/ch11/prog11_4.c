/* prog11_4, ���c���]�� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   struct data	
   {
      char name[10];
      int math;
   } s1={"Lily Chen",83};   	/* �ŧi���c�ܼ�s1�A�ó]�w��� */
   struct data s2; 			/* �ŧi���c�ܼ�s2 */
   s2=s1;					/* �⵲�c�ܼ�s1���ȳ]�w�����c�ܼ�s2 */
   
   printf("s1.name=%s, s1.math=%d\n",s1.name,s1.math);
   printf("s2.name=%s, s2.math=%d\n",s2.name,s2.math);
   
   system("pause");
   return 0;
}

