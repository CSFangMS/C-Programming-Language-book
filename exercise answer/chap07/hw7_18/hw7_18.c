/* hw7_18.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{  
   int n,i=2,sum=0;
   do
   {
      printf("叫块n(n>0案计): ");
      scanf("%d",&n);
   }
   while(n<=0 || n%2==1);
   
   do
   {
      sum+=i;
      i+=2;
   }   
   while(i<=n);
   printf("2+4+...+%d=%d\n",n,sum);
            
   system("pause");
   return 0;
}

/* output---------------------
叫块n(n>0案计): 9
叫块n(n>0案计): -3
叫块n(n>0案计): 10
2+4+...+10=30
----------------------------*/
