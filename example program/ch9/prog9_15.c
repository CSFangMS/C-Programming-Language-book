/* prog9_15, �L�X�}�C����} */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
int main(void)
{
   int i,A[SIZE]={20,8,13};

   for(i=0;i<SIZE;i++)
      printf("A[%d]=%2d,��}��%p\n",i,A[i],&A[i]);
   printf("�}�CA����}=%p\n",A);    /* �L�X�}�CA����} */
   
   system("pause");
   return 0;
}

