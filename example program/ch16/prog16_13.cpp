// prog16_13, �p���������ϥνd��
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    // �w�q�������OCWin
{
   private:
     char id;
     int width;   
     int height;
     
   public:     
     int area(void) // ��Ʀ���area()
     {                 
        return width*height;
     }
     void show_area(void)  // ��Ʀ���show_area()
     {
        cout<<"Window "<< id <<", area=" << area() << endl;
     }
};

int main(void)
{
   CWin win1;   
   
   win1.id='A';
   win1.width=-5;
   win1.height=12;
   
   win1.show_area();
   system("pause");
   return 0;
}

