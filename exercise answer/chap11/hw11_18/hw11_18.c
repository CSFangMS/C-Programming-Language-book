/* hw11_18.c, 列舉型態的練習 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{   
   enum boolean
   {
      FALSE,
      TRUE
   }test;
   test=5<20;
   if(test==TRUE)
      printf("5<20成立\n");
   else
      printf("5<20不成立\n");
                                                                                                                                  
   system("pause");
   return 0;
}

/* output-----
5<20成立
------------*/
