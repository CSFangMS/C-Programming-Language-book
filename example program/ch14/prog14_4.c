/* prog14_4, �H�ʺA�O����t�m�쵲��C */
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
   int i,val,num;
   NODE *first,*current,*previous;    /* �إ�3�ӫ��VNODE������ */
   printf("Number of nodes: ");
   scanf("%d",&num);			/* ��J�`�I���Ӽ� */
   for(i=0;i<num;i++)    
   {
      current=(NODE *) malloc(sizeof(NODE));  /* �إ߷s���`�I */
      printf("Data for node %d: ",i+1);
      scanf("%d",&(current->data));		/* ��J�`�I��data���� */
      if(i==0)					/* �p�G�O�Ĥ@�Ӹ`�I */
         first=current;			/* �����first���V�ثe���`�I */
      else
         previous->next=current;	/* ��e�@�Ӹ`�I��next���V�ثe���`�I */
      current->next=NULL;		/* ��ثe���`�I��next���VNULL */
      previous=current;   		/* ��e�@�Ӹ`�I�]���ثe���`�I */
   }
   current=first;			/* �]�wcurrent���Ĥ@�Ӹ`�I */
   while (current!=NULL)	/* �p�G�٨S�����C���ݡA�h�i�樫�X���ʧ@ */
   {
      printf("address=%p, ",current);	 /* �L�X�`�I����} */
      printf("data=%d, ",current->data); /* �L�X�`�I��data���� */
      printf("next=%p\n",current->next);	 /* �L�X�`�I��next���� */
      current=current->next;	    /* �]�wcurrent���V�U�@�Ӹ`�I */
   }
   system("pause");
   return 0;
}
