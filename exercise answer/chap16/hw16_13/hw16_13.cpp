/* hw16_13.cpp */
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
class CRec
{
   public:     
     int width;
     int height;
     double weight;
     
     void set(double wg)
     {
        weight=wg;
     }   
     void set(int w,int h)
     {
        width=w;
        height=h;
     }
     void set(double wg,int w,int h)
     {
        weight=wg;
        width=w;
        height=h;
     }
     void show(void)
     {
        cout << "width=" << width;
        cout << ", height=" << height;
        cout << ", weight=" << weight << endl;
     }
};

int main(void)
{  
   CRec obj1,obj2;
   obj1.set(5.3);
   obj1.set(8,10);
   obj1.show();
   
   obj2.set(1.5,6,3);
   obj2.show();
   
   system("pause");
   return 0;
}

/* output-----------------------
width=8, height=10, weight=5.3
width=6, height=3, weight=1.5
------------------------------*/
