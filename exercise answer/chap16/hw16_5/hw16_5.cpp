// hw16_5.cpp
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{  
   int n,i=1,sum=0;	// �]�w�j����
   do
   {
      cout << "�п�Jn�� (n>0): ";
      cin >> n;
   }
   while (n<=0);		// ��n<=0�ɭ��ƿ�Jn����

   do
      sum+=i++;		// �p��sum=sum+i����Ai���ȦA�[1
   while (i <= n);	// ��i<=n�ɰ���֥[���ʧ@
   cout << "1+2+...+" << n << "=" << sum << endl;

   system("pause");
   return 0;
}

/* output--------------
�п�Jn�� (n>0): -5
�п�Jn�� (n>0): 10
1+2+...+10=55
---------------------*/
