/* prog10_20, ���а}�C */
#include <stdio.h> 
#include <stdlib.h>
int main(void)
{
   int i;
   char *ptr[3]={"Tom", "Lily", "James Lee"};
   for(i=0;i<3;i++)	   
      puts(ptr[i]); 	/* �L�X����ptr[i]�ҫ��V���r�� */
   
   system("pause");
   return 0;
}

