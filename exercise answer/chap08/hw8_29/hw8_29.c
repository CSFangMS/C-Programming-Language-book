/* hw8_29.c */
#include <stdio.h>
#include <stdlib.h>
void add10(int,int);
int a=3,b=5;
int main(void)
{   
   printf("�I�s���add10()���e: ");
   printf("a=%d, b=%d\n",a,b);
   add10(a,b);
   printf("�I�s���add10()����: ");
   printf("a=%d, b=%d\n",a,b); 
      
   system("pause");
   return 0;
}

void add10(int a,int b)
{   
   a=a+10;
   b=b+10;
}

/* output----------------------
�I�s���add10()���e: a=3, b=5
�I�s���add10()����: a=3, b=5
-----------------------------*/
