/* prog7_1, for�j�骺�ϥ� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i,sum=0;
   for(i=1;i<=10;i++)			/* �p��1+2+...+10�����G */
      sum+=i;
   printf("1+2+3+...+10=%d\n",sum);	/* �L�Xsum���� */
   
   system("pause");
   return 0;
}

