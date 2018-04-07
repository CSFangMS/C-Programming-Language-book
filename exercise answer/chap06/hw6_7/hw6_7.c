/* hw6_7.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int a=5,b=3,c=4;
   
   if(a+b>c && b+c>a && c+a>b)
     printf("可以構成三角形\n");
   else
     printf("不可以構成三角形\n");     
   
   system("pause");
   return 0;
}
