/* prog7_3, while�j�骺�ϥ� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i=1,sum=0;	/* �]�w�j���� */
   while(sum<=100)    /* while�j��A��sum�p��100�h�~��֥[ */
   {
      sum+=i;
      printf("�q1�֥[��%2d=%2d\n",i,sum);
      i++;
   }
   printf("�����֥[��%d\n",i-1);
   system("pause");
   return 0;
}
