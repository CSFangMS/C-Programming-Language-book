/* prog6_9, ����B��l���m�� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int num1,num2,larger;
   printf("�п�J��Ӿ��:");
   scanf("%d %d",&num1,&num2);
   
   num1>num2 ? (larger=num1) : (larger=num2);  /* ����B��l */
   printf("%d�ƭȸ��j\n",larger); 
 
   system("pause");
   return 0;
}

