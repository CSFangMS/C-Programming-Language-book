/* hw2_2.c */
#include <stdio.h>      /* ��stdio.h�t�A�i�� */
#include <stdlib.h>     /* ��stdlib.h�t�A�i�� */
void main(void)          /* �D���main()�}�l */
{
   int i=5;             /* �ŧi����ܼ�i�A�ó]�Ȭ�5 */
   printf("%d+%d=%d\n",i,i,i+i);    /* �I�sprintf()��ơA�L�X�íp��i+i���� */
   system("pause");     /* �I�sdos�̪�pause���O�A�ΨӼȰ��{�������� */
   return 0;            /* main()�����A�Ǧ^0�A��ܨ�ƥ��`���� */
}

/* output---
5+5=10
----------*/
