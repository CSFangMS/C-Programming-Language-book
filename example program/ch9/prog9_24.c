/* prog9_24, �r��}�C���ƻs */
#include <stdio.h>
#include <stdlib.h>
#define MAX 3
#define LENGTH 10
int main(void)
{
   char arr1[MAX][LENGTH]={"Tom","Lily","James Lee"};
   char arr2[MAX][LENGTH];
   int i,j;

   for(i=0;i<MAX;i++) 	/* �Narr1�����e�ƻs��arr2�� */
   {
      for(j=0;j<LENGTH;j++)
         if(arr1[i][j]=='\0')   /* �p�G�J��u\0�v,�N��Ū��r�굲�� */
            break;		  		/* ���檺break�ԭz�|�����19����� */
         else
            arr2[i][j]=arr1[i][j];
      arr2[i][j]='\0';
   }
   for(i=0;i<MAX;i++) 	
      printf("arr2[%d]=%s\n",i,arr2[i]);  /* �L�X�}�Carr2�����e */
   system("pause");
   return 0;
}

