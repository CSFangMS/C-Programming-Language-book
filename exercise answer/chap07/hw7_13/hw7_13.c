/* hw7_13.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{    
   int i=2,num=1,sum=0;
     
   printf("�п�J�@�ӥ���ƥB������: "); 
   scanf("%d",&num);
   while(num%2==1 || num<=0)
   {
      printf("�п�J�@�ӥ���ƥB������: "); 
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
�п�J�@�ӥ���ƥB������: 9
�п�J�@�ӥ���ƥB������: -8
�п�J�@�ӥ���ƥB������: 10
2+4+6+...+10=30
-----------------------------*/
