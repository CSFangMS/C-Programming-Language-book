/* hw13_14.c */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{   
   char ch;
   ch=argv[1][0];
   printf("%c的ASCII值為%d\n",ch,ch); 
   
   system("pause");
   return 0;
}

/* output-----------------------------------
C:\Documents and Settings\wien> cd c:\prog
C:\prog>hw13_14 k
k的ASCII值為107
-------------------------------------------*/
