/* hw7_29.c, break �ԭz���m�� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int input,cnt=0,passwd=6128;
   
   while(1)
   {
      printf("�п�J�K�X: ");
      scanf("%d", &input);
      cnt++;
      if(input==passwd)
      {
         printf("�K�X��J���T�A�w��ϥΥ��t��!!\n");  
         break;
      }        
      if(cnt>=3)
      {
         printf("�K�X��J�W�L�T��!!\n");
         break;
      } 
   }      
   
   system("pause");
   return 0;
}

/* output-----------------------
�п�J�K�X: 1234
�п�J�K�X: 6128
�K�X��J���T�A�w��ϥΥ��t��!!
------------------------------*/
