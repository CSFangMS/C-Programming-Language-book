/* prog3_11, �C�L�X�U�ظ�ƫ��A������ */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   char ch;			/* �ŧi�r���ܼ�ch */
   float num;			/* �ŧi�B�I���ܼ�num */	
   
   printf("sizeof(2L)=%d\n",sizeof(2L));	/* �d�߱`��2L�Ҧ��줸�� */
  
   printf("sizeof(ch)=%d\n",sizeof(ch));	/* �d�ߦr���ܼ�ch�Ҧ��줸�� */
   printf("sizeof(num)=%d\n",sizeof(num));	/* �d���ܼ�num�Ҧ��줸�� */

   printf("sizeof(int)=%d\n",sizeof(int));	/* �d��int���A�Ҧ��줸�� */
   printf("sizeof(long)=%d\n",sizeof(long));	/* �d��long���A�Ҧ��줸�� */
   printf("sizeof(short)=%d\n",sizeof(short));	/* �d��short�Ҧ��줸�� */

   system("pause");
   return 0;
}

