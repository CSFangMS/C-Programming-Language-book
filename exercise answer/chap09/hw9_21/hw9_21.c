/* hw9_21.c */
#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 4
double average(int arr[ROW][COL]);
int main(void)
{   
   int i,j; 
   int a[ROW][COL]={{12,25,33,64},
                    {57,46,72,81},
                    {33,78,49,11}};
                    
   printf("陣列的內容為:\n");   
   for(i=0;i<ROW;i++)
   {
      for(j=0;j<COL;j++)
	      printf("%2d ",a[i][j]);	   
      printf("\n");
   }
   printf("平均值=%f\n",average(a));
	
   system("pause");
   return 0;
}

double average(int arr[ROW][COL])
{
   int i,j,sum=0;
   for(i=0;i<ROW;i++)
      for(j=0;j<COL;j++)
	      sum+=arr[i][j];
   return (double)sum/(ROW*COL);
}

/* output----------
陣列的內容為:
12 25 33 64
57 46 72 81
33 78 49 11
平均值=46.750000
-----------------*/
