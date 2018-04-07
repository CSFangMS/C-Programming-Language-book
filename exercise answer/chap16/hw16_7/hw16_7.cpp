// hw16_7.cpp
#include <iostream>
#include <cstdlib>
using namespace std;
int add(int,int);    		// add()函數的原型
float add(float,float);
int main(void)
{
   int sum1, a=5, b=3;
   float sum2, x=3.2f, y=6.6f;
   sum1=add(a,b);
   cout << a << "+" << b << "=" << sum1 << endl; 
   sum2=add(x,y);
   cout << x << "+" << y << "=" << sum2 << endl; 

   system("pause");
   return 0;
}

int add(int num1, int num2) 	// add(int,int)函數的定義
{
   int a;
   a=num1+num2;
   return a;
}

float add(float num1, float num2)// add(float,float)函數的定義
{
   float a; 
   a=num1+num2;
   return a;
}

/* output----
5+3=8
3.2+6.6=9.8
-----------*/
