/* prog13_8, �R�O�C�޼ƪ��ϥ� */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])  /* �w�q�i�����޼ƪ�main()��� */
{
   int i;
   
   printf("argc���Ȭ�%d\n",argc);   		/* �L�Xargc���� */
   for(i=0;i<argc;i++)      
      printf("argv[%d]=%s\n",i,argv[i]);	/* �L�Xargv[i]���� */
   
   system("pause");
   return 0;
}

