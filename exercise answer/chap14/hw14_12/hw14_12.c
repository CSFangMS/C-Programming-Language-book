/* hw14_12 */
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
   NODE *pa,*pb,*pc,*pd,*ptr;
   pa=(NODE*) malloc(sizeof(NODE));
   pb=(NODE*) malloc(sizeof(NODE));	
   pc=(NODE*) malloc(sizeof(NODE));	   
   pd=(NODE*) malloc(sizeof(NODE));	   
   
   pa->data=12;			/* �]�w�`�Ia��data������12 */
   pa->next=pb;			/* �N�`�Ia��next�������V�U�@�Ӹ`�I�A�Yb */
   pb->data=38;			
   pb->next=pc;			
   pc->data=64;	
   pc->next=pd;			
   pd->data=37;   		
   pd->next=NULL;		/* �N�`�Id��next�����]��NULL */
   
   ptr=pa;
   
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
