/* prog14_3, �إ�3�`�I���쵲��C */
#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;				  /* ��Ʀ���  */
   struct node *next;		  /* �쵲�����A�s����V�U�@�Ӹ`�I������  */
};
typedef struct node NODE;	  /* �Nstruct node�w�q��NODE���A */

int main(void)
{
   NODE a,b,c;		/* �ŧia,b,c��NODE���A���ܼ� */
   NODE *ptr=&a;		/* �ŧiptr,�ñN�����V�`�Ia */
   
   a.data=12;			/* �]�w�`�Ia��data������12 */
   a.next=&b;			/* �N�`�Ia��next�������V�U�@�Ӹ`�I�A�Yb */
   b.data=30;			
   b.next=&c;			
   c.data=64;			
   c.next=NULL;		/* �N�`�Ic��next�����]��NULL */
   
   while (ptr!=NULL)	/* ��ptr���ONULL�ɡA�h����U�C�ԭz */
   {
      printf("address=%p, ",ptr);		/* �L�X�`�I����} */
      printf("data=%d, ",ptr->data);	/* �L�X�`�I��data���� */
      printf("next=%p\n",ptr->next);	/* �L�X�U�@�Ӹ`�I����} */
      ptr=ptr->next;					/* �Nptr���V�U�@�Ӹ`�I */
   }
   
   system("pause");
   return 0;
}
