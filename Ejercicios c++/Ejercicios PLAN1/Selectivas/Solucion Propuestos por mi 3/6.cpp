#include<iostream.h>

int main()
{
 int n,c,u;
 
 cout<<"ingrese el numero:";cin>>n;
  
  if(n>99 && n<1000)
 {
  c=n/100;
  u=n%10;
  cout<<"producto de cifras extremas:"<<c*u<<"\n";
 }
 
 system("pause");
}
