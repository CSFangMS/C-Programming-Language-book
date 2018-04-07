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
                    
   printf("陣列A的內容為:\n");   
   show(A);
   printf("\n陣列B的內容為:\n");   
   show(B);
   add(A,B,C);
   printf("\n陣列A+B=C,陣列C的內容為:\n");   
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
陣列A的內容為:
01 02 03
04 05 06

陣列B的內容為:
07 08 09
10 11 12

陣列A+B=C,陣列C的內容為:
08 10 12
14 16 18
------------------------*/
