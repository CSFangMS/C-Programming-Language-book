/* prog10_13, ���б`�ƪ��ȻP��} */
#include <stdio.h> 
#include <stdlib.h>
int main(void)
{
   int i,a[5]={32,16,35,65,52};
   printf("a=%p\n",a);		/* �L�X���б`��a���� */
   printf("&a=%p\n",&a); 		/* �L�X���б`��a����} */
   
   for(i=0;i<5;i++)
     printf("&a[%d]=%p\n",i,&a[i]);  /* �L�X�}�Ca�C�@�Ӥ�������} */
   
   system("pause");
   return 0;
}

