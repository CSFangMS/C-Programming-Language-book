/* hw7_3.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{    
   int i,n,sum=0;
   printf("�п�Jn�ȡAn���_��:");
   scanf("%d",&n);
   
   for(i=1;i<=n;i+=2)
      sum+=i;
   
   printf("1+3+5+...+%d=%d\n",n,sum);
      
   system("pause");
   return 0;
}

/* output----------------
�п�Jn�ȡAn���_��:7
1+3+5+...+7=16
-----------------------*/
