/* prog14_7.c, �`�I�R�����d�� */
#include<stdio.h>
#include<stdlib.h>
#include "linklist.h"
int main(void)
{
   NODE *first,*node;
   int arr[]={12,38,57};
   first=createList(arr,3);       /* �إ��쵲��C */
   printList(first);   
   
   node=searchNode(first,38);		/* ��X�`�I��ƭȬ�38����} */
   first=deleteNode(first,node);	/* �N�`�I38�R���� */
   printList(first);				/* �L�X�`�I�����e */
   
   first=deleteNode(first,first);	/* �R�����Ĥ@�Ӹ`�I*/
   printList(first);				/* �L�X�`�I�����e */
   
   first=deleteNode(first,first);	/* �R�����Ĥ@�Ӹ`�I*/
   printList(first);				/* �L�X�`�I�����e */
   
   freeList(first);
   
   system("pause");
   return 0;
}



/* createList()�A��C�إߨ�� */
NODE *createList(int *arr, int len)
{
   int i;
   NODE *first,*current,*previous;
   for(i=0;i<len;i++)    
   {
      current=(NODE *) malloc(sizeof(NODE));
      current->data=arr[i];	  /* �]�w�`�I����Ʀ��� */
      if(i==0)				  /* �P�O�O�_���Ĥ@�Ӹ`�I */
         first=current;
      else
         previous->next=current;  /* ��e�@�Ӹ`�I��next���V�ثe�`�I */
      current->next=NULL;		  
      previous=current;   		  
   }
   return first;
}

/* printList()�A��C�C�L��� */
void printList(NODE* first)
{
   NODE* node=first;		/* �Nnode���V�Ĥ@�Ӹ`�I */
   if(first==NULL)		/* �p�G��C�O�Ū��A�h�L�XList is empty! */
      printf("List is empty!\n");
   else					/* �_�h���X��C�A�æL�X�`�I��data���� */
   {
      while(node!=NULL)
      {
         printf("%3d", node->data);
         node=node->next;
      }
      printf("\n");   
   }
}

/* freeList()�A����O�ЪŶ���� */
void freeList(NODE* first)
{
   NODE *current,*tmp;
   current=first;		              	/* �]�wcurrent���V�Ĥ@�Ӹ`�I */
   while (current!=NULL)
   {
      tmp=current;				/* ���Ȧs�ثe���`�I */
      current=current->next;	 	/* �Ncurrent���V�U�@�Ӹ`�I */
      free(tmp);					/* �N�Ȧs���`�I���� */
   }
}

/* searchNode()��ơA�i�Ǧ^�Ĥ@�Ӧs��item���`�I����} */
NODE* searchNode(NODE* first, int item)
{
   NODE *node=first;
   while(node!=NULL)
   {
      if(node->data==item)		/* �p�Gnode��data����item */
         return node;		  	/* �Ǧ^node�A�Y�Ӹ`�I����} */
      else 
         node=node->next;		/* �_�h�N���Ы��V�U�@�Ӹ`�I */
   }
   return NULL;		/* �p�G�䤣��ŦX���`�I�A�h�Ǧ^NULL */
}


/* insertNode()�A�i�bnode����[�J�@�ӷs���`�I */ 
void insertNode(NODE *node,int item)
{
   NODE *newnode;
   newnode=(NODE *) malloc(sizeof(NODE));	/* ���o�s�`�I����} */
   newnode->data=item;			   /* �N�s�`�I��data�]��item */
   newnode->next=node->next;	/* �N�s�`�I��next�]����`�I��next */
   node->next=newnode;			  /* �N��`�I��next���V�s�`�I */
}


/* �R��node�A�Ǧ^�R��node����A��C�Ĥ@�Ӹ`�I����} */
NODE* deleteNode(NODE *first, NODE *node)   
{
   NODE *ptr=first;
   if(first==NULL)  /* �p�G��C�O�Ū��A�h�L�XNothing to delete! */
   {
      printf("Nothing to delete!\n");
      return NULL;
   }
   if(node==first)		/* �p�G�R�����O�Ĥ@�Ӹ`�I */
      first=first->next;	/* ��first���V�U�@�Ӹ`�I */
   else					/* �p�G�R�����O�Ĥ@�Ӹ`�I�H�~���䥦�`�I */
   {
      while(ptr->next!=node)   /* ���n�R�����`�I���e�@�Ӹ`�I */
         ptr=ptr->next;
      ptr->next=node->next;    /* ���s�]�wptr��next���� */
   }
   free(node);
   return first;
}
