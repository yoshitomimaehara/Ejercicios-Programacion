#include <iostream>
using namespace std;
int main()
{
 int n,u,d,c,uc;
 for(n=1000;n<=9999;n++)
 { 
  uc=n/1000;
  c=(n%1000)/100;
  d=(n%100)/10;
  u=n%10; 
  if(c==d && uc==u)
  {
   cout<<n<<endl;
  }
 }
system("Pause");
}
