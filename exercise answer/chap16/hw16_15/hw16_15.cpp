/* hw16_15.cpp */
#include <iostream>
#include <cstdlib>
#define PI 3.14159
using namespace std;
class CSphere
{
   private:
     int x;
     int y;
     int z; 
     int radius;  
     
     public:
     void setLocation(int a,int b,int c)
     {
        x=a;
        y=b;
        z=c;
     }
     void setRadius(int r)
     {
        radius=r;
     }
     double volume(void)
     {
        return (4/3.0*PI*radius*radius*radius);
     }
     void showCenter(void)
     {
        cout << "x=" << x << ", y=" << y;
        cout << ", z=" << z << endl;
     }
};

int main(void)
{  
   CSphere sp1;   
   sp1.setLocation(8,5,12);   
   sp1.setRadius(2);
   sp1.showCenter();
   cout << "volume=" << sp1.volume() << endl;
   
   system("pause");
   return 0;
}

/* output-----------
x=8, y=5, z=12
volume=33.5103
------------------*/
