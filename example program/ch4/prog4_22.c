/* prog4_22, �ϥ�getche()�Pgetch()��� */
#include <stdio.h>
#include <conio.h>       	/* ���Jconio.h���Y�� */
#include <stdlib.h>
int main(void)
{
   char ch;
   printf("�п�J�@�Ӧr��: ");
   ch=getche();			/* �Q��getche()��J�r�� */
   printf("  �z��J���r���O: %c\n",ch);

   printf("�п�J�@�Ӧr��: ");
   ch=getch();			/* �Q��getch()��J�@�Ӧr�� */
   printf("   �z��J���r���O: %c\n",ch);
   
   system("pause");
   return 0;
}

