/* prog6_6, if-else-if�ԭz������ */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int score;
   printf("Your score:"); 
   scanf("%d",&score);

   if (score>=80)
      printf("%d is A\n",score);			/* �L�XA */
   else if (score>=70)
            printf("%d is B\n",score);		/* �L�XB */
         else if (score>=60)
                  printf("%d is C\n",score);	/* �L�XC */
               else
                  printf("Failed!!\n");	/* �L�X�r��"Failed!!" */

   system("pause");
   return 0;
}

