/* hw8_29.c */
#include <stdio.h>
#include <stdlib.h>
void add10(int,int);
int a=3,b=5;
int main(void)
{   
   printf("㊣ㄧ计add10()ぇ玡: ");
   printf("a=%d, b=%d\n",a,b);
   add10(a,b);
   printf("㊣ㄧ计add10()ぇ: ");
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
㊣ㄧ计add10()ぇ玡: a=3, b=5
㊣ㄧ计add10()ぇ: a=3, b=5
-----------------------------*/
