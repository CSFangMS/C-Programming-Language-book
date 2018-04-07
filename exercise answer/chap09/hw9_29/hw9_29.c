/* hw9_29.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{   
   int i;
   char arr[][11]={"C language","C++","Java"};

   for(i=0;i<sizeof(arr)/11;i++)
       puts(arr[i]);
	
   system("pause");
   return 0;
}

/* output------
C language
C++
Java
-------------*/
