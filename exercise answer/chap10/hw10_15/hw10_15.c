/* hw10_15.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{   
   int arr[5]={31,17,33,22,16};
   int i,*ptr=arr;
   
   for(i=0;i<5;i++)
      *ptr=*(ptr++)+10;
   
   printf("�B���}�C�����e��"); 
   for(i=0;i<5;i++)
      printf("%d ",arr[i]);
   printf("\n");
   
   system("pause");
   return 0;
}

/* output---------------------------
�B���}�C�����e��41 27 43 32 26
----------------------------------*/
