/* prog8_4, display()���m�� */
#include <stdio.h>
#include <stdlib.h>
void display(char,int);	/* display()��ƪ��쫬 */
int main(void)
{
   int n;
   char ch;
   printf("�п�J���C�L���r��:");
   scanf("%c",&ch);
   printf("�аݭn�L�X�X�Ӧr��:");
   scanf("%d",&n);
   display(ch,n);		/* �I�s�ۭq����ơA�L�Xn��ch�r�� */

   system("pause");
   return 0;
}

void display(char ch,int n)	/* �ۭq�����display() */
{
   int i;
   for(i=1;i<=n;i++)			/* for�j��A�i�L�Xn��ch�r�� */
       printf("%c",ch);			/* �L�Xch�r�� */
   printf("\n");
   return;
}
