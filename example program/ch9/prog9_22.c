/* prog9_22, �N�r��̤p�g�r���ഫ���j�g */
#include <stdio.h>
#include <stdlib.h>
void toUpper(char s[]);	/* �ŧi���toUpper()���쫬 */
int main(void)
{
   char str[15];			/* �ŧi�i�e��15�Ӧr�����}�Cstr */
		
   printf("�п�J�@�Ӧr��: ");
   gets(str);			/* ��J�r�� */
   toUpper(str);			/* �I�stoUpper() ��� */
   printf("�ഫ���j�g��: %s\n",str);		/* �L�Xstr�r�ꪺ���e */
   
   system("pause");
   return 0;
}

void toUpper(char s[])
{
   int i=0;
   while(s[i]!='\0')		/* �p�Gs[i] ������\0�A�h����U�����ԭz */
   {
      if(s[i]>=97 && s[i]<=122) /* �p�G�O�p�g�r�� */
         s[i]=s[i]-32;		/* ��p�g�r����ASCII�X��32�A�ܦ��j�g */
      i++;
   }
}

