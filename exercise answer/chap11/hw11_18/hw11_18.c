/* hw11_18.c, �C�|���A���m�� */
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
      printf("5<20����\n");
   else
      printf("5<20������\n");
                                                                                                                                  
   system("pause");
   return 0;
}

/* output-----
5<20����
------------*/
