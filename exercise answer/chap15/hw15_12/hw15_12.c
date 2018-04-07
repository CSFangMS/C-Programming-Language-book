/* hw15_12.c */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 8
void show_binary(int);
int main(void)
{   
   int a;
   a=(89>>2);
   
   printf("89�G�i�쪺�Ȭ�: ");
   show_binary(89);
   printf("�k���G�Ӧ줸��: ");
   show_binary(a);
   printf("�k���G�Ӧ줸�᪺�Ȭ�: %d\n",a);
      
   system("pause");
   return 0;
}
void show_binary(int num)
{
   int i,b[SIZE]={0};
   for(i=1;i<=SIZE;i++)
   {
      b[SIZE-i]=num%2;
      num/=2;
   }
   for(i=0;i<SIZE;i++)
      printf("%d",b[i]);
   printf("\n");
}

/* output-----------------
89�G�i�쪺�Ȭ�: 01011001
�k���G�Ӧ줸��: 00010110
�k���G�Ӧ줸�᪺�Ȭ�: 22
------------------------*/
