#include <iostream>
using namespace std;
int main()
{
 int dc,n,u,d,c,uc,sc;
 cout<<"ingrese el numero de 5 cifras:";cin>>n;
 if(n>=10000 && n<=99999)
 {
  dc=n/10000;
  uc=(n%10000)/1000;
  c=(n%1000)/100;
  d=(n%100)/10;
  u=n%10;
  if(dc==u && uc==d && n%2!=0)
  {
   cout<<"el numero es capicua impar de 5 cifras"<<endl;
  }
  else
  {
  cout<<"el numero es no capicua impar de 5 cifras"<<endl;
  }
 }
 else
 {
  cout<<"el numero es no de 5 cifras"<<endl;
 }
 system("pause");
}
