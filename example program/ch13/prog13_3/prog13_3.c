/* prog13_3.c, �����ܼƪ��ϥνd�� (�D�{��) */
#include <stdio.h>
#include <stdlib.h>
int cnt;			/* �ŧi�����ܼ�cnt */
void count(void);	/* �ŧicount()��ƪ��쫬 */
int main(void)
{
  printf("�п�Jcnt�����: ");
  scanf("%d",&cnt);
  
  count();		/* �Ĥ@���I�s���count() */
  count();		/* �ĤG���I�s���count() */
  
  cnt++;					/* �Ncnt���ȥ[1 */
  printf("cnt=%d\n",cnt);		/* �L�Xcnt���� */
 
  system("pause");
  return 0;
}

