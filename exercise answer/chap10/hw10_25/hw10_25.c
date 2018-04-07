/* hw10_25.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int arr[2][4]={{2,3,4,5},{6,7,8,9}};
   int i,j;
  
   printf("(a) arr=%p\n",arr);
   printf("(b) arr[0]=%p, arr[1]=%p\n",arr[0],arr[1]);
   printf("(c) arr+1=%p\n",arr+1);
   printf("(d) *(arr+0)=%p, ",*(arr+0));
   printf("*(arr+1)=%p\n",*(arr+1));
   
   printf("(e) *(arr+1)+0=%p, ",*(arr+1)+0);
   printf("*(arr+1)+1=%p\n",*(arr+1)+1);
   printf("    *(arr+1)+2=%p, ",*(arr+1)+2);
   printf("*(arr+1)+3=%p\n",*(arr+1)+3);
   
   printf("(f) *(*(arr+1)+0)=%d, ",*(*(arr+1)+0));
   printf("*(*(arr+1)+1)=%d\n",*(*(arr+1)+1));
   printf("    *(*(arr+1)+2)=%d, ",*(*(arr+1)+2));
   printf("*(*(arr+1)+3)=%d\n",*(*(arr+1)+3));
   
   system("pause");
   return 0;
}

/* output--------------------------------------
(a) arr=0022FF48
(b) arr[0]=0022FF48, arr[1]=0022FF58
(c) arr+1=0022FF58
(d) *(arr+0)=0022FF48, *(arr+1)=0022FF58
(e) *(arr+1)+0=0022FF58, *(arr+1)+1=0022FF5C
    *(arr+1)+2=0022FF60, *(arr+1)+3=0022FF64
(f) *(*(arr+1)+0)=6, *(*(arr+1)+1)=7
    *(*(arr+1)+2)=8, *(*(arr+1)+3)=9
---------------------------------------------*/
