/* prog9_19, �M��G���}�C���̤j�ȻP�̤p�� */
#include <stdio.h>
#include <stdlib.h>
#define ROW 4 
#define COL 3 
void search(int a[][COL],int b[]);		/* search() ��ƪ��쫬 */
int main(void)
{
   int a[ROW][COL]= {	{26, 5, 7},
                        	{10, 3,47},
               		{ 6,76, 8},
                  		{40, 4,32}};
   int i,j,b[2];
   printf("�G���}�C��������:\n");   		/* �L�X�}�C�����e */
   for(i=0;i<ROW;i++)
   {
      for(j=0;j<COL;j++)
         printf("%02d ",a[i][j]);
      printf("\n");
   }
   search(a,b);    					/* �I�ssearch()��� */
   printf("�}�C���̤j��=%02d\n",b[0]);	/* �L�X�}�C���̤j�� */
   printf("�}�C���̤p��=%02d\n",b[1]); 	/* �L�X�}�C���̤p�� */
   system("pause");
   return 0;
}
void search(int arr[][COL],int p[])  /* �ۭq���search() */
{
   int i,j;
   p[0]=p[1]=arr[0][0];		/* �Np[0]�Pp[1]���]��arr[0][0] */
   for(i=0;i<ROW;i++)
      for(j=0;j<COL;j++)
      {
         if(p[0]<arr[i][j])   	/* �M��}�C�̪��̤j�� */
            	p[0]=arr[i][j];
         if(p[1]>arr[i][j])   	/* �M��}�C�̪��̤p�� */
            	p[1]=arr[i][j];
      }
}

