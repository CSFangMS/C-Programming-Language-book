/* prog4_20, �ץ�prog4_18�����~ (�G) */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int num;
   char ch;

   printf("�п�J�@�Ӿ��: ");
   scanf("%d",&num);		
   fflush(stdin);            /* �M�Žw�İϤ������ */
   
   printf("�п�J�@�Ӧr��: ");
   scanf("%c",&ch);		
   printf("num=%d, ascii of ch=%d\n",num,ch); 

   system("pause");
   return 0;
}

