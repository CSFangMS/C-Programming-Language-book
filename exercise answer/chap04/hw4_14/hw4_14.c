/* hw4_14.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int num;   
   printf("�п�J�Q�i����: ");
   scanf("%d",&num);
   
   printf("%d���K�i��O %o, ",num,num);
   printf("�Q���i��O %x\n",num);
   
   system("pause");
   return 0;
}

/* output-----------------------
�п�J�Q�i����: 30
30���K�i��O 36, �Q���i��O 1e
------------------------------*/
