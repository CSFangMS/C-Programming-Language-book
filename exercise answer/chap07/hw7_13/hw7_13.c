/* hw7_13.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{    
   int i=2,num=1,sum=0;
     
   printf("叫块タ俱计案计: "); 
   scanf("%d",&num);
   while(num%2==1 || num<=0)
   {
      printf("叫块タ俱计案计: "); 
      scanf("%d",&num);
   }
       
   while(i<=num)
   {
      sum+=i;
      i+=2;
   }
   
   printf("2+4+6+...+%d=%d\n",num,sum);
   
   system("pause");
   return 0;
}

/* output---------------------
叫块タ俱计案计: 9
叫块タ俱计案计: -8
叫块タ俱计案计: 10
2+4+6+...+10=30
-----------------------------*/
