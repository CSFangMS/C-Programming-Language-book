/* prog7_7, �Q��do while�j��Dn! */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int n,i=1,fact=1;		/* �]�w�j���� */
   do
   {
      printf("�п�Jn�� (n>0): ");
      scanf("%d",&n);
   }
   while (n<=0);			/* ��n<=0�ɭ��ƿ�Jn���� */

   do
      fact*=i++;
   while (i <= n);		/* ��i<=n�ɰ���֭����ʧ@ */
   printf("%d!=%d\n",n,fact);
   
   system("pause");
   return 0;
}

