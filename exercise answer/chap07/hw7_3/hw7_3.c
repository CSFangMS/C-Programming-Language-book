/* hw7_3.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{    
   int i,n,sum=0;
   printf("請輸入n值，n為奇數:");
   scanf("%d",&n);
   
   for(i=1;i<=n;i+=2)
      sum+=i;
   
   printf("1+3+5+...+%d=%d\n",n,sum);
      
   system("pause");
   return 0;
}

/* output----------------
請輸入n值，n為奇數:7
1+3+5+...+7=16
-----------------------*/
