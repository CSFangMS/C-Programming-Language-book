/* prog5_6, �޿�B��l������ */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int score;
   printf("�п�J���Z:");
   scanf("%d",&score);
   
   if ((score<0) || (score>100))   /* �Y���Z�W�X0��100���� */
      printf("���Z��J���~!!\n");     
   
   if ((score<60) && (score>49))   /* �Y���Z����50��59���� */
      printf("�ݭn�ɦ�!!\n");   

   system("pause");   
   return 0;
}

