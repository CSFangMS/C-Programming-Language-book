/* hw4_13.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   char str[10];   
   printf("�п�J���]�t�ťժ��r��: ");
   scanf("%s",str);
   
   printf("\"%s\"\n");
   printf("\\%20s\\\n");
   printf("\\%-20s\\\n");
   
   system("pause");
   return 0;
}

/* output----------------------
�п�J���]�t�ťժ��r��: Hello
"Hello"
\               Hello\
\Hello               \
-----------------------------*/
