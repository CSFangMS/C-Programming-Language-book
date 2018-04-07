/* hw9_18.c */
#include <stdio.h>
#include <stdlib.h>
int idx(int arr[]);
int main(void)
{    
   int i;
   int arr[10]={43,71,52,8,11,23,45,19,21,9};

   printf("arr[]=");
   for(i=0;i<10;i++)
	   printf("%d ",arr[i]);
   printf("\n最小值的索引值為%d\n",idx(arr));
	
   system("pause");
   return 0;
}

int idx(int arr[])
{
   int i,min=arr[0],index;
   for(i=0;i<10;i++)
      if(min>arr[i])
      {
         min=arr[i];
         index=i;
      }
   return index;
}

/* output-------------------------
arr[]=43 71 52 8 11 23 45 19 21 9
最小值的索引值為3
--------------------------------*/
