/* prog9_10, �x�}���ۥ[ */
#include <stdio.h>
#include <stdlib.h>
#define ROW 2		/* �w�qROW��2 */
#define COL 3		/* �w�qCOL��3 */
int main(void)
{
   int i,j;
   int A[ROW][COL]={{1,2,3},{5,6,8}};	/* �ŧi�}�CA�ó]�w��� */
   int B[ROW][COL]={{3,0,2},{3,5,7}};  	/* �ŧi�}�CB�ó]�w��� */ 
	
   printf("Matrix A+B=\n");
   for(i=0;i<ROW;i++)			/* �~�h�j��A�Ψӱ���C�� */
   {
      for(j=0;j<COL;j++)		/* ���h�j��A�Ψӱ����� */
         printf("%3d",A[i][j]+B[i][j]); 		/* �p��G�}�C�ۥ[ */
      printf("\n");
   }
   system("pause");
   return 0;
}

