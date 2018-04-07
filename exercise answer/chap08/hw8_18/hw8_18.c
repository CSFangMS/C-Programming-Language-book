/* hw8_18.c */
#include <stdio.h>
#include <stdlib.h>
int fib(int);
int main(void)
{   
   int i;
   for(i=1;i<=10;i++)
      printf("fib(%d)=%d\n",i,fib(i));
      
   system("pause");
   return 0;
}

int fib(int n)
{ 
   int i,fn;
   int fn_1=1,fn_2=1;
   
   if(n==1 || n==2)
      return 1;
   else
      for(i=3;i<=n;i++)   
      {
         fn=fn_1+fn_2;
         fn_2=fn_1;
         fn_1=fn;
      }
   return fn;     
}

/* output---
fib(1)=1
fib(2)=1
fib(3)=2
fib(4)=3
fib(5)=5
fib(6)=8
fib(7)=13
fib(8)=21
fib(9)=34
fib(10)=55
----------*/
