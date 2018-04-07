/* hw6_19a.c, 修正後的程式 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int a=4,b=6,larger;
   
   a>b ? (larger=a) : (larger=b);  /* 條件運算子 */
   printf("%d數值較大\n",larger); 
 
   system("pause");
   return 0;
}

/* output---------
6數值較大
----------------*/
