/* hw10_11.c */
#include <stdio.h>
#include <stdlib.h>
void add10(int *,int *);
int main(void)
{
   int a=3, b=5;
   
   printf("㊣ㄧ计add10()ぇ玡: ");
   printf("a=%d, b=%d\n",a,b);    	
   add10(&a,&b);
   printf("㊣ㄧ计add10()ぇ: ");
   printf("a=%d, b=%d\n",a,b);
   
   system("pause");
   return 0;
}

void add10(int *p1,int *p2)
{
   *p1=*p1+10;
   *p2=*p2+10;
}

/* output------------------------
㊣ㄧ计add10()ぇ玡: a=3, b=5
㊣ㄧ计add10()ぇ: a=13, b=15
-------------------------------*/
