/* hw9_1.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{    
   int i,arr[5];
   
   for(i=0;i<5;i++)
      arr[i]=i+1;
   for(i=0;i<5;i++)
      printf("arr[%d]=%d\n",i,arr[i]);   
   
   system("pause");
   return 0;
}

/* output---
arr[0]=1
arr[1]=2
arr[2]=3
arr[3]=4
arr[4]=5
-----------*/
