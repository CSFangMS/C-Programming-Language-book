/* prog10_1, �L�X�ܼƩ�O���餺����} */
#include <stdio.h> 
#include <stdlib.h>
int main(void)
{
   int a,b=5;		/* �ŧi�ܼ�a�Pb�A���ܼ�a�S���]�w��� */
   double c=3.14;
   
   printf("a=%4d, sizeof(a)=%d, ��}��%d\n",a,sizeof(a),&a);
   printf("b=%4d, sizeof(b)=%d, ��}��%d\n",b,sizeof(b),&b);
   printf("c=%4.2f, sizeof(c)=%d, ��}��%d\n",c,sizeof(c),&c);
   system("pause");
   return 0;
}

