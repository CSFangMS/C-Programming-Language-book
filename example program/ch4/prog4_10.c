/* prog4_10, �ϥ�scanf()��ơA�@����J��Ӿ�� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int a,b;
   
   printf("�п�J��Ӿ��: ");	
   scanf("%d %d",&a,&b);		/* ����L��J�G�Ӽƨó]�w���ܼ�a�Bb */
   printf("%d+%d=%d\n",a,b,a+b); 	/* �p���`�M�æL�X���e */

   system("pause");
   return 0;
}

