/* prog9_21, ��J�ΦL�X�r�� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   char name[15];	/* �ŧi�r���}�Cname */
		
   puts("What's your name?");
   gets(name);		/* �Q��gets()Ū�J�r��A�üg�J�r���}�Cname�� */
   puts("Hi!");
   puts(name);		/* �L�X�r���}�Cname�����e */
   puts("How are you?");
   system("pause");
   return 0;
}

