/* prog6_8, if-else�t����D(�G) */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int num;
   printf("�п�J�@�Ӿ��:");	
   scanf("%d",&num);
   
   if (num>=0)
   {
      if(num<=10)
         printf("�Ʀr����0��10����\n");
   }
   else     /* �p�G��10�檺if�ԭz������ */
      printf("�Ʀr�p��0\n");          
 
   system("pause");
   return 0;
}

