/* prog8_3, �Nadd()��Ʃ�bmain()��ƪ��e�� */
#include <stdio.h>
#include <stdlib.h>

int add(int num1, int num2) 	
{
   int a;
   a= num1+num2;
   return a; 
}

int main(void)
{
   int sum, a=5, b=3;
   sum=add(a,b);			
   printf("%d+%d=%d\n",a,b,sum); 

   system("pause");
   return 0;
}

