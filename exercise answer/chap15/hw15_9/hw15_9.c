/* hw15_9.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{  
   int a=159;
   int b=0147;
   int c=0x618A;
    
   printf("%d���K�i�쬰%o, �Q���i�쬰%x\n",a,a,a);
   printf("%o���Q�i�쬰%d, �Q���i�쬰%x\n",b,b,b);
   printf("%X���K�i�쬰%o, �Q�i�쬰%d\n",c,c,c); 
   
   system("pause");
   return 0;
}

/* output----------------------------
159���K�i�쬰237, �Q���i�쬰9f
147���Q�i�쬰103, �Q���i�쬰67
618A���K�i�쬰60612, �Q�i�쬰24970
-----------------------------------*/
