/* hw6_16.c */ 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
   float a=1.0f,b=6.0f,c=2.0f;
   float value,r1,r2;
   
   value=b*b-4*a*c;
   
   if(value>0.0)
   {
      r1=-b+sqrt(value)/(2*a);
      r2=-b-sqrt(value)/(2*a);
      printf("��{������ӹ��: r1=%f, r2=%f\n",r1,r2);
   }   
   else if(value==0.0)
   {
      r1=-b/(2*a);
      printf("��{������Ӭ۵����: r1,r2=%f\n",r1);
   } 
   else
      printf("�S�����\n"); 

   system("PAUSE");
   return 0;
}

/* output-------------------------------------
��{������ӹ��: r1=-3.354249, r2=-8.645751
--------------------------------------------*/
