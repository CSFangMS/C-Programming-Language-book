/* hw15_16.c */
#include <stdio.h>
int main(void)
{   
   int num;
   struct status
   {
      unsigned floppy:3;
      unsigned hard_disk:6;
      unsigned cd_rom:6;
      unsigned printer:5;
   } computer;
    
   printf("請輸入軟碟數目:"); 
   scanf("%d",&num);
   computer.floppy=num;
   printf("請輸入硬碟數目:"); 
   scanf("%d",&num);
   computer.hard_disk=num;
   printf("請輸入光碟機數目:"); 
   scanf("%d",&num);
   computer.cd_rom=num;
   printf("請輸入印表機數目:"); 
   scanf("%d",&num);
   computer.printer=num;
   
   printf("\n軟碟數%d台, ",computer.floppy);
   printf("硬碟%d台\n",computer.hard_disk);
   printf("光碟機%d台, ",computer.cd_rom); 
   printf("印表機%d台\n",computer.printer); 
   
   system("pause");
   return 0;
}

/* output--------------
請輸入軟碟數目:1
請輸入硬碟數目:3
請輸入光碟機數目:2
請輸入印表機數目:2

軟碟數1台, 硬碟3台
光碟機2台, 印表機2台
---------------------*/
