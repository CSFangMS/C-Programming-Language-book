/* prog4_21, �ϥ�getchar()�Pputchar()��� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   char ch;
   printf("�п�J�@�Ӧr��: ");
   ch=getchar();				/* ��J�@�Ӧr���A�ë��w���ܼ�ch */
   printf("�z��J���r���O: ");
   putchar(ch); 				/* �N�r��ch��X��ù��W */
   putchar('\n'); 			/* �N����r��ch��X��ù��W */
   
   system("pause");
   return 0;
}

