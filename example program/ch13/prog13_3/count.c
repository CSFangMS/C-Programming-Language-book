/* count.c, �N�����ܼƪ��ȥ[1�A�æC�L�X�� */
#include <stdio.h>
void count(void)
{
   extern int cnt;     /* �Q��extern����r����cnt�O�����ܼ� */
   cnt++;
   printf("cnt=%d\n",cnt);
}

