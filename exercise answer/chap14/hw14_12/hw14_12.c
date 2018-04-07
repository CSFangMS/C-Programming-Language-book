/* hw14_12 */
#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;				  /* 資料成員  */
   struct node *next;		  /* 鏈結成員，存放指向下一個節點的指標  */
};
typedef struct node NODE;	  /* 將struct node定義成NODE型態 */

int main(void)
{
   NODE *pa,*pb,*pc,*pd,*ptr;
   pa=(NODE*) malloc(sizeof(NODE));
   pb=(NODE*) malloc(sizeof(NODE));	
   pc=(NODE*) malloc(sizeof(NODE));	   
   pd=(NODE*) malloc(sizeof(NODE));	   
   
   pa->data=12;			/* 設定節點a的data成員為12 */
   pa->next=pb;			/* 將節點a的next成員指向下一個節點，即b */
   pb->data=38;			
   pb->next=pc;			
   pc->data=64;	
   pc->next=pd;			
   pd->data=37;   		
   pd->next=NULL;		/* 將節點d的next成員設成NULL */
   
   ptr=pa;
   
   while (ptr!=NULL)	/* 當ptr不是NULL時，則執行下列敘述 */
   {
      printf("address=%p, ",ptr);		/* 印出節點的位址 */
      printf("data=%d, ",ptr->data);	/* 印出節點的data成員 */
      printf("next=%p\n",ptr->next);	/* 印出下一個節點的位址 */
      ptr=ptr->next;					/* 將ptr指向下一個節點 */
   }
   
   system("pause");
   return 0;
}
