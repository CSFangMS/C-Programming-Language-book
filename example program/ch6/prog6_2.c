/* prog6_2, �ϥΨ��if�ԭz�ӧP�_�Ʀr */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int num;
   
   printf("�п�J�@�Ӿ��:");
   scanf("%d",&num);
   
   if(num>0) 		/* if�ԭz�A�ΨӧP�Onum�O�_�j��0 */
      printf("�z��J����Ƥj��0\n");
      
   if(num<=0)		/* if�ԭz�A�ΨӧP�Onum�O�_�p�󵥩�0 */
      printf("�z��J����Ƥp��ε���0\n");      
      
   printf("�{������\n"); 

   system("pause");
   return 0;
}

