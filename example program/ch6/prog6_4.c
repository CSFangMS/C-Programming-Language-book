/* prog6_4,if-else�ԭz���m�� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int num;
   printf("�п�J�@�Ӿ��:");	/* ��J���num */
   scanf("%d",&num);
   
   if (num%2!=0)		/* �p�Gnum����Q2�㰣 */ 
   {  
      printf("%d����Q2�㰣, ",num);
      printf("�ҥH%d�O�_��\n",num);		/* �L�Xnum���_�� */
   }
   else
   {
      printf("%d�i�H�Q2�㰣, ",num);
      printf("�ҥH%d�O����\n",num);		/* �L�Xnum������ */
   }
 
   system("pause");
   return 0;
}

