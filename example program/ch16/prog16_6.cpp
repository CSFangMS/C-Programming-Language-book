// prog16_6, ��Ʀh�����d��--�޼ƭӼƤ��P
#include <iostream>
#include <cstdlib>
using namespace std;
void star(void);		// �ŧistar(void)���쫬
void star(int);		// �ŧistar(int)���쫬
int main(void)
{
   star();			// �I�s�S���޼ƪ�star()
   star(9);			// �I�s���@�Ӿ�Ƥ޼ƪ�star()
     
   system("pause");
   return 0;
}
void star(void)			// �w�qstar(void)���
{
   cout << "�L�X5�ӬP��: *****" << endl;
}
void star(int num)		// �w�qstar(int)���
{
   cout << "�L�X" << num << "�ӬP��: ";
   for(int i=1;i<=num;i++)
      cout << "*";
   cout << endl;
}

