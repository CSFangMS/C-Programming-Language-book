/* prog7_14, continue�ԭz���ϥ� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i;
   for(i=1;i<=10;i++)
   {
      if(i%3==0)			/* �P�_i%3�O�_��0 */
         continue;		/* �^��j�骺�_�l�B�~����� */
      printf("i=%d\n",i);	/* �L�Xi���� */
   }
   printf("�����j���, i=%d\n",i);

   system("pause");
   return 0;
}

