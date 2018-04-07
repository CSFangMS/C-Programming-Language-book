/* hw9_23.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{   
   char str[]="Hello C language";
   printf("字串str佔了%d個位元組\n",sizeof(str));
	
   system("pause");
   return 0;
}

/* output-----------------
字串str佔了17個位元組
------------------------*/
