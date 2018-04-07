// hw16_5.cpp
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{  
   int n,i=1,sum=0;	// 設定迴圈初值
   do
   {
      cout << "請輸入n值 (n>0): ";
      cin >> n;
   }
   while (n<=0);		// 當n<=0時重複輸入n的值

   do
      sum+=i++;		// 計算sum=sum+i之後，i的值再加1
   while (i <= n);	// 當i<=n時執行累加的動作
   cout << "1+2+...+" << n << "=" << sum << endl;

   system("pause");
   return 0;
}

/* output--------------
請輸入n值 (n>0): -5
請輸入n值 (n>0): 10
1+2+...+10=55
---------------------*/
