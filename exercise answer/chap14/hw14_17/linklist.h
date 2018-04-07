/* linklist.h, �쵲��C�����Y�� */
struct node
{
   int data;				  /* ��Ʀ���  */
   struct node *next;		  /* �쵲�����A�s����V�U�@�Ӹ`�I������  */
};
typedef struct node NODE;	  /* �Nstruct node�w�q��NODE���A */

NODE *createList(int *, int);			/* ��C�إߨ�� */
void printList(NODE *);				/* ��C�C�L��� */
void freeList(NODE *);				/* �����C�O�ЪŶ���� */
void insertNode(NODE *,int );			/* ���J�`�I��� */
NODE *searchNode(NODE *, int );		/* �j�M�`�I��� */
NODE *deleteNode(NODE *, NODE *);		/* �R���`�I��� */
