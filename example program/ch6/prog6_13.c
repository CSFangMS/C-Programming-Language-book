/* prog6_13, �ϥ�goto�ԭz */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i=0,sum=0;
   start:			/* start ���� */
      i++;
      sum+=i;
      printf("%d",i);		
      if (i<10)
      {
         printf("+");	/* �L�X+�A�æ^��start���Ҥ����ԭz */
         goto start;
      }
      printf("=%d\n",sum);/* �L�Xsum���� */
   system("pause");
   return 0;
}

