/* prog12_6, ��J��ƨ�G�i���ɮ� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   double a=3.14,b=6.28;
   int arr[]={12,43,64};
   FILE *fptr;

   fptr=fopen("number.bin","wb"); 	/* �}���ɮ� */
   fwrite(&a,sizeof(double),1,fptr);	/* �g�J�ܼ�a���� */
   fwrite(&b,sizeof(double),1,fptr); 	/* �g�J�ܼ�b���� */  
   fwrite(arr,sizeof(int),3,fptr); 	/* �g�J�}�Carr���Ҧ����� */ 
   
   fclose(fptr);		/* �����ɮ� */
   printf("�ɮ׼g�J����!!\n");

   system("pause");
   return 0;
}

