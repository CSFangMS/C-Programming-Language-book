// prog16_16, �غc�����h�� 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    // �w�q�������OCWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char i,int w,int h)	// ���T�Ӥ޼ƪ��غc��
     {
        id=i;
        width=w;
        height=h;
        cout <<"CWin(char,int,int) �غc���Q�I�s�F..."<<endl;
     }
     CWin(void)   			// �S���޼ƪ��غc��
     {
        id='Z';
        width=10;
        height=10;
        cout <<"CWin() �غc���Q�I�s�F..."<<endl;        
     }        
     void show_member(void)	// ��Ʀ����A�Ψ���ܸ�Ʀ�������
     {
        cout<<"Window "<<id <<": ";
        cout<<"width="<<width<<", height="<<height<<endl;
     }
};



int main(void)
{
   CWin win1('A',50,40); 	// �إ�win1����A�éI�s���T�Ӥ޼ƪ��غc��
   CWin win2; 		  	// �إ�win2����A�éI�s�S���޼ƪ��غc��
      
   win1.show_member();  
   win2.show_member();
   
   system("pause");
   return 0;
}

