/* hw7_31.c */ 
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i;
   
   printf("�i�Q2�P3�㰣�A������Q12�㰣���Ʀ� "); 
   for(i=1;i<=100;i++)
   {
      if(!(i%2==0 && i%3==0 && i%12!=0))
         continue;
      printf("%d ",i); 
   }
   
   system("pause");
   return 0;
}

/* output--------------------------------------------------
�i�Q2�P3�㰣�A������Q12�㰣���Ʀ� 6 18 30 42 54 66 78 90
---------------------------------------------------------*/
