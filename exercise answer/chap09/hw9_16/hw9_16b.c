/* hw9_16b.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{    
   int i,j,k;
   int img[3][4][5]={{{247, 67, 32,187,240},
                      {122, 41, 21, 16,154},
                      { 52, 35, 79, 21, 93},
                      { 27, 22, 35,154, 75}},
                     {{ 14,145,132, 25, 40},
                      {212,221,121, 54, 14},
                      {132,235,178, 19, 14},
                      {122,122,133, 54, 47}},
                     {{ 17, 44, 32,127,240},
                      { 22,231, 21,156,124},
                      { 32, 35, 78, 21,194},
                      {127, 22, 33, 54, 45}}};   

   printf("�N�C�@�e������r�ȥ[30\n");	
   for(i=0;i<4;i++)
	   for(j=0;j<5;j++)
	   {
		   img[0][i][j]+=30;		/* r��+30 */
		   if(img[0][i][j]>255)
			   img[0][i][j]=255;	
      }

   printf("4x5�e�����T���x�}���ܹ�\n");
   for(i=0;i<3;i++)		/* �L�Ximg�����e */
	   for(j=0;j<4;j++)
	   {
		   for(k=0;k<5;k++)
			   printf("%3d\t",img[i][j][k]);
		   printf("\n");
	   }
	
   system("pause");
   return 0;
}

/* output----------------------------
�N�C�@�e������r�ȥ[30
4x5�e�����T���x�}���ܹ�
255      97      62     217     255
152      71      51      46     184
 82      65     109      51     123
 57      52      65     184     105
 14     145     132      25      40
212     221     121      54      14
132     235     178      19      14
122     122     133      54      47
 17      44      32     127     240
 22     231      21     156     124
 32      35      78      21     194
127      22      33      54      45
-----------------------------------*/