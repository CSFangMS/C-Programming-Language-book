// prog16_14, �Q�Τ�����Ʀs���p������
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    // �w�q�������OCWin
{
   private:
     char id;
     int width;   	// �p����Ʀ���
     int height;  	// �p����Ʀ���
   
   public:  
     int area(void)   // ������Ʀ���area()
     {                 
         return width*height;
     }
     void show_area(void)		// ������Ʀ���show_area()
     {
        cout<<"Window "<< id <<", area=" << area() << endl;
     }
     void set_data(char i,int w,int h)	// ������Ʀ���set_data()
     {
        id=i;
        if(w>0 && h>0)		// �p�Gw�Ph���j��0
        {
           width=w;    
           height=h;
        }
        else				// �p�Gw�Ph���@�Ӥp��0
        {  
           width=0;
           height=0;
           cout << "input error" << endl;
        }
     }
};
int main(void)
{
   CWin win1;   
      
   win1.set_data('A',50,40);
   win1.show_area();  // ��ܭ��n 
   system("pause");
   return 0;
}

