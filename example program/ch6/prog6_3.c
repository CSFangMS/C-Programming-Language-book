/* prog6_3, ��ܩʵ��cif-else�ԭz */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int num;
   printf("�п�J�@�Ӿ��:");
   scanf("%d",&num);
   
   if(num>0)		/* �P�Onum�O�_�j��0 */
      printf("�z��J����Ƥj��0\n");
   else   		/* �p�Gnum���O�j��0�A�h����U�����ԭz */
      printf("�z��J����Ƥp��ε���0\n");      
      
   printf("�{������\n"); 

   system("pause");
   return 0;
}

