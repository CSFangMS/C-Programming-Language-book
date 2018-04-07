/* hw7_6.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{    
   int num,n;
   
   printf("請輸入一個正整數: ");
   scanf("%d",&num); 
   
   printf("%d的因數有 ",num); 
   for(n=1;n<=num;n++)
      if(num%n==0)
         printf("%d ",n);            
      
   system("pause");
   return 0;
}

/* output----------------------
請輸入一個正整數: 24
24的因數有 1 2 3 4 6 8 12 24
-----------------------------*/
