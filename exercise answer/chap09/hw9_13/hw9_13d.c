/* hw9_13d.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{    
   int i,sum[5]={0},max=sum[0],max_index=0;
   int sale[3][5]={{33,32,56,45,33},{77,33,68,45,23},
                   {43,55,43,67,65}};
                   
   printf("���~A���P���`���B��");                 
   for(i=0;i<3;i++)     
      sum[0]+=sale[i][0]*12;
   printf("%3d��\n",sum[0]);
   
   printf("���~B���P���`���B��");                 
   for(i=0;i<3;i++)     
      sum[1]+=sale[i][1]*16;
   printf("%3d��\n",sum[1]);
   
   printf("���~C���P���`���B��");                 
   for(i=0;i<3;i++)     
      sum[2]+=sale[i][2]*10;
   printf("%3d��\n",sum[2]);
   
   printf("���~D���P���`���B��");                 
   for(i=0;i<3;i++)     
      sum[3]+=sale[i][3]*14;
   printf("%3d��\n",sum[3]);
   
   printf("���~E���P���`���B��");                 
   for(i=0;i<3;i++)     
      sum[4]+=sale[i][4]*15;
   printf("%3d��\n",sum[4]);
   
   for(i=0;i<5;i++)
      if(max<sum[i])
      {
         max=sum[i];
         max_index=i;
      }
   printf("�P���`���B�̦h���O���~%c\n",max_index+65); 
     
   system("pause");
   return 0;
}

/* output---------------------
���~A���P���`���B��1836��
���~B���P���`���B��1920��
���~C���P���`���B��1670��
���~D���P���`���B��2198��
���~E���P���`���B��1815��
�P���`���B�̦h���O���~D
----------------------------*/
