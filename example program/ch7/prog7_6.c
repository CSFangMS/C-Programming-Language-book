/* prog7_6, do while�j�骺���� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int n,i=1,sum=0;	/* �]�w�j���� */
   do
   {
      printf("�п�Jn�� (n>0): ");
      scanf("%d",&n);
   }
   while (n<=0);		/* ��n<=0�ɭ��ƿ�Jn���� */

   do
      sum+=i++;		/* �p��sum=sum+i����Ai���ȦA�[1 */
   while (i <= n);	/* ��i<=n�ɰ���֥[���ʧ@ */
   printf("1+2+...+%d=%d\n",n,sum);

   system("pause");
   return 0;
}

