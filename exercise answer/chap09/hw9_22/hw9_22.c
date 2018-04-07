/* hw9_22.c */
#include <stdio.h>
#include <stdlib.h>
#define ROW 2
#define COL 3
void add(int A[ROW][COL],int B[ROW][COL],int C[ROW][COL]);
void show(int arr[ROW][COL]);
int main(void)
{   
   int i,j; 
   int A[ROW][COL]={{1,2,3},{4,5,6}};
   int B[ROW][COL]={{7,8,9},{10,11,12}};
   int C[ROW][COL]={0};
                    
   printf("�}�CA�����e��:\n");   
   show(A);
   printf("\n�}�CB�����e��:\n");   
   show(B);
   add(A,B,C);
   printf("\n�}�CA+B=C,�}�CC�����e��:\n");   
   show(C);
	
   system("pause");
   return 0;
}

void add(int a[ROW][COL],int b[ROW][COL],int c[ROW][COL])
{
   int i,j,sum=0;
   for(i=0;i<ROW;i++)
      for(j=0;j<COL;j++)
	      c[i][j]=a[i][j]+b[i][j];   
}

void show(int arr[ROW][COL])
{
   int i,j;
   for(i=0;i<ROW;i++)
   {
      for(j=0;j<COL;j++)
	      printf("%02d ",arr[i][j]);	   
      printf("\n");
   }
}

/* output-----------------
�}�CA�����e��:
01 02 03
04 05 06

�}�CB�����e��:
07 08 09
10 11 12

�}�CA+B=C,�}�CC�����e��:
08 10 12
14 16 18
------------------------*/
