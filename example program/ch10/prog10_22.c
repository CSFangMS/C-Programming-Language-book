/* prog10_22, �L�X�}�C����} */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{	
   int num[3][4];			/* �ŧi3��4���G���}�Cnum */
 
   printf("num=%p\n",num);	/* �L�X��������num���� */
   printf("&num=%p\n",&num); 	/* �L�X��������num����} */
   printf("*num=%p\n",*num);  	/* �L�X��������num�ҫ��V�����Ъ��� */    
   
   printf("num[0]=%p\n",num[0]);	/* �L�X���б`��num[0]���� */
   printf("num[1]=%p\n",num[1]); 	/* �L�X���б`��num[1]���� */ 
   printf("num[2]=%p\n",num[2]); 	/* �L�X���б`��num[2]���� */ 
   
   printf("&num[0]=%p\n",&num[0]);	/* �L�X���б`��num[0]����} */
   printf("&num[1]=%p\n",&num[1]); 	/* �L�X���б`��num[1]����} */ 
   printf("&num[2]=%p\n",&num[2]); 	/* �L�X���б`��num[2]����} */    

   system("pause");
   return 0;
}

