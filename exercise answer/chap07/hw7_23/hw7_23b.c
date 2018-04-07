/* hw7_23b.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{  
   int n=1,sum=0;   

   while(sum<1000)
      sum+=n++;   
   
   printf("n=%d, sum=%d\n",n,sum);
            
   system("pause");
   return 0;
}

/* output-------
n=46, sum=1035
--------------*/
