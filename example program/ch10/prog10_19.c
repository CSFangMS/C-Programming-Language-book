/*  prog10_19, �H�����ܼƫ��V�r�� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   char name[20];
   char *ptr="How are you?";     /* �N���Ы��V�r��"How are you?" */
   printf("what's your name? ");
   gets(name);					/* ����LŪ�J�r�� */
   printf("Hi, %s, ",name);		/* �L�X�r��}�Cname�����e */
   puts(ptr); 					/* �L�X��ptr�ҫ��V���r�� */
   
   system("pause");
   return 0;
}

