/* prog7_12, �_���j��A�N��ƤϹL�ӦC�L */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int a,r;

   while(1)
   {
      do		
      {
         printf("Input an integer:");
         scanf("%d",&a);
      }
      while (a<=0);   		/* ������J�j��0������� */

      printf("The reverse is ");
      while (a!=0)		/* �N����ƭ˹L�ӿ�X */
      {
         r=a%10;			/* �p��a/10���l�� */
         a/=10;			/* �p��a/10�A�A�⵲�G�]�^��a */
         printf("%d",r);	
      }
      printf("\n\n");
   }
   system("pause");
   return 0;
}

