/* hw6_7.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int a=5,b=3,c=4;
   
   if(a+b>c && b+c>a && c+a>b)
     printf("�i�H�c���T����\n");
   else
     printf("���i�H�c���T����\n");     
   
   system("pause");
   return 0;
}
