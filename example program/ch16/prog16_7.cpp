// prog16_7, �Q�ε��c�Ӫ�ܵ���
#include <iostream>
#include <cstdlib>
using namespace std;
struct Win  		// �Q�ε��c�өw�q����
{
   char id;
   int width;  		// Win���c��width����
   int height;		// Win���c��height����
};

int area(struct Win w)     	// �w�q���area()�A�Ψӭp�⭱�n
{
   return w.width*w.height;    // ���n=�e*��
}

int main(void)
{
   Win win1;			// �ŧiWin���c������win1
   
   win1.id='A';
   win1.width=50; 	// �]�wwidth��50
   win1.height=40;	// �]�wheight��40

   cout<<"Window "<< win1.id<<", area="<<area(win1)<<endl;
   system("pause");
   return 0;
}

