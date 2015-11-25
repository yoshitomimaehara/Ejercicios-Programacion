#include <iostream>
using namespace std;
int main()
{
 int u,n,r;
 cout<<"Ingrese un numero:";cin>>n;
 if(n>=100 && n<=999)
 { 
  u=n%10;
  r=u*u;
  cout<<"El resultado es:"<<r<<endl;
 }
 else
 {
  r=n/2;
  cout<<"El resultado es:"<<r<<endl;
 }
 system("pause");
}
