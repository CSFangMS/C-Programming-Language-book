/* prog5_5, ���W�B��l�u++�v */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int a=3, b=3;
   
   printf("a=%d",a);
   printf(", a++���Ǧ^�Ȭ�%d",a++);	/* �p��a++�A�æL�X��Ǧ^�� */
   printf(", a=%d\n",a);
   
   printf("b=%d",b);
   printf(", ++b���Ǧ^�Ȭ�%d",++b); 	/* �p��++b�A�æL�X��Ǧ^�� */
   printf(", b=%d\n",b);
     
   system("pause");   
   return 0;
}

