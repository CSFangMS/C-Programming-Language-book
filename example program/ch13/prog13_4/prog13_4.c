/* prog13_4, �ϥ�#ifdef�B#else�P#endif���O */
#include <stdio.h>
#include <stdlib.h>
#define STR "Hello C language.\n"		/* �w�qSTR���@�Ӧr�� */
int main(void)
{
   #ifdef STR              				/* �p�GSTR�w�Q�w�q�F */
      printf(STR);
   #else               					/* �p�GSTR�S���Q�w�q */
      printf("STR �S���Q�w�q\n");
   #endif
   
   system("pause");
   return 0;
}

