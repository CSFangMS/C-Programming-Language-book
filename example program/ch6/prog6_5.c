/* prog6_5, �_��if�ԭz���m�� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int score;
   printf("�п�J���Z:");		
   scanf("%d",&score);
   
   if (score<60) 		/* �p�Gscore<60 */
   {  
      if(score>=50)		/* �p�Gscore>=50 */
         printf("�аѥ[�ɦ�\n");
      else 
         printf("��������\n"); 
   }
   else
      printf("����ή�\n");	
 
   system("pause");
   return 0;
}

