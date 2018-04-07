/* hw8_7.c */
#include <stdio.h>
#include <stdlib.h>
int is_prime(int);
int main(void)
{  
   int cnt=0,x=2;
   
   while(cnt<100)
   {
      if(is_prime(x++))
         cnt++;
   }   
   printf("第100個質數是%d\n",x-1); 
      
   system("pause");
   return 0;
}

int is_prime(int num)
{
   int i;   
   for(i=2;i<=num-1;i++)
      if(num%i==0)
         return 0;
   return 1;
}

/* output--------
第100個質數是541
---------------*/
