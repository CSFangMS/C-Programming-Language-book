/* hw7_9.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{    
   int i,j,sum=0;
   
   for(i=1,j=2;i<=49;i+=2,j+=2) 
      sum+=i*i-j*j;      

   printf("1^2-2^2+3^2-4^2+...+49^2-50^2=%d\n",sum);
   
   system("pause");
   return 0;
}

/* output---------------------------
1^2-2^2+3^2-4^2+...+49^2-50^2=-1275
----------------------------------*/
