/* prog15_4, �줸��쵲�c���ϥ� */
#include <stdio.h>
int main(void)
{
   struct status				/* �w�q�줸��쵲�c */
   {
      unsigned sex:1;
      unsigned marriage:1;
      unsigned age:7;
   };
   struct status tom={1,0,21};	/* �ŧi�ó]�w���c�ܼƪ���� */
      
   if(tom.sex==0)			/* �P�Osex��쪺�줸�O�_��0 */
      printf("�ʧO:�k,");
   else
      printf("�ʧO:�k,");
   
   if(tom.marriage==0)		/* �P�Omarriage��쪺�줸�O�_��0 */
      printf("���B,");
   else
      printf("�w�B,");

   printf("%d��\n",tom.age);	/* �L�Xage��쪺�� */
   
   printf("sizeof(tom)=%d\n",sizeof(tom));  /* �L�X�ܼ�tom���j�p */
  
   system("pause");
   return 0;
}

