/* prog9_3, �d�߰}�C�Ҧ����O�ЪŶ� */ 
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   double data[4];	/* �ŧi��4�Ӥ�����double���A�}�C */
   printf("�}�C�����Ҧ����줸��:%d\n",sizeof(data[0]));
   printf("��Ӱ}�C�Ҧ����줸��:%d\n",sizeof(data));
   printf("�}�C�������Ӽ�:%d\n",sizeof(data)/sizeof(double));
   
   system("pause");
   return 0;
}

