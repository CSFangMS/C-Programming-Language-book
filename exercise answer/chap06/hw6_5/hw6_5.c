/* hw6_5.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{    
   int weight;
   
   printf("�п�J�魫:");
   scanf("%d",&weight);
   
   if(weight>90)
      printf("�魫�L��\n");
   else
      printf("���|�L��\n");
      
   system("pause");
   return 0;
}

/* output---------
�п�J�魫:95
�魫�L��
----------------*/
