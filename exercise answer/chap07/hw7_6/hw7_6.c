/* hw7_6.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{    
   int num,n;
   
   printf("�п�J�@�ӥ����: ");
   scanf("%d",&num); 
   
   printf("%d���]�Ʀ� ",num); 
   for(n=1;n<=num;n++)
      if(num%n==0)
         printf("%d ",n);            
      
   system("pause");
   return 0;
}

/* output----------------------
�п�J�@�ӥ����: 24
24���]�Ʀ� 1 2 3 4 6 8 12 24
-----------------------------*/
