/* prog12_4, �ϥ�fread()���Ū���ɮפ��e */
#include <stdio.h>
#include <stdlib.h>
#define MAX 80
int main(void)
{
   FILE *fptr;
   char str[MAX];
   int bytes;   			/* �s��fread()���\Ū�����r���� */
   fptr=fopen("output.txt","r");
		
   while(!feof(fptr))		/* �p�G�٨SŪ���ɧ�  */
   {
      bytes=fread(str,sizeof(char),MAX,fptr);
      if(bytes<MAX)
         str[bytes]='\0';
      printf("%s\n",str);    /* �L�X�ɮפ��e */
   }
   fclose(fptr);	/* �����ɮ� */
   
   system("pause");
   return 0;
}

