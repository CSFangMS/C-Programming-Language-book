 /* prog13_5, �ϥ�#if�B#else�P#endif���O */
 #include <stdio.h>
 #include <stdlib.h>
 #define SIZE 15		/* �w�qSIZE����15 */
 
 int main(void)
 {
    #ifdef SIZE
       #if SIZE>20
          char str[SIZE]="Hello C language.";
       #else
          char *str="SIZE too small";
       #endif
    #else
       char *str="SIZE not defined";
    #endif  
    
    printf("%s\n",str);
    
    system("pause");
    return 0;
 }

