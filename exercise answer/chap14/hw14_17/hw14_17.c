/* hw14_17.c */
#include<stdio.h>
#include<stdlib.h>
#include "linklist.h"     			 /* �t�A���Y��linklist.h */

int main(void)
{
   NODE *first;
   int arr[]={12,43,56,34,98,76,43,24};		/* �إ߰}�Carr[] */
   first=createList(arr,8);		/* �H�}�C�����إ��쵲��C */
   printList(first);				/* �L�X�쵲��C�����e  */
   freeList(first);				/* ����O�ЪŶ�  */
   
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


