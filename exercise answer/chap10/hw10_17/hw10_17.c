/* hw10_17.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int A[5]={74,48,30,17,62};
   int i,min,max;
   int min_idx=0,max_idx=0;
   min=max=A[0];
   
   for(i=0;i<5;i++)
   {
      if(*(A+i)>max)   /* 耞程 */
      {
         max=*(A+i);	
         max_idx=i;
      }
      if(*(A+i)<min)   /* 耞程 */
      {
         min=*(A+i);	
         min_idx=i;
      }
   }
   printf("皚柑じ程%d",max);
   printf(", ま%d\n",max_idx); 
   printf("皚柑じ程%d",min);
   printf(", ま%d\n",min_idx); 
   
   system("pause");
   return 0;
}

/* output--------------------------
皚柑じ程74, ま0
皚柑じ程17, ま3
---------------------------------*/
