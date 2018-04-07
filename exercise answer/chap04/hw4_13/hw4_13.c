/* hw4_13.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   char str[10];   
   printf("請輸入不包含空白的字串: ");
   scanf("%s",str);
   
   printf("\"%s\"\n");
   printf("\\%20s\\\n");
   printf("\\%-20s\\\n");
   
   system("pause");
   return 0;
}

/* output----------------------
請輸入不包含空白的字串: Hello
"Hello"
\               Hello\
\Hello               \
-----------------------------*/
