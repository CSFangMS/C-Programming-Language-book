/* prog4_19, �ץ�prog4_18�����~ */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int num;
   char ch;

   printf("�п�J�@�Ӿ��: ");
   scanf("%d",&num);		/* ����L��J��ơA�ë��w���ܼ�num */
   printf("�п�J�@�Ӧr��: ");
   scanf(" %c",&ch);		/* ����L��J�r���A�ë��w���ܼ�ch */
   printf("num=%d, ascii of ch=%d\n",num,ch); /* �L�Xnum�Pch��ascii�X */

   system("pause");
   return 0;
}

