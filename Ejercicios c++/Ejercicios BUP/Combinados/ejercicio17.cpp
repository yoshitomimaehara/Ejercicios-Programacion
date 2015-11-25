#include <iostream>
using namespace std;
int main()
{
 int n,u,d,c,uc,sc;
 cout<<"ingrese el numero de 4 cifras:";cin>>n;
 if(n>=1000 && n<=9999)
 {
  uc=n/1000;
  c=(n-uc*1000)/100;
  d=((n-uc*1000)- c*100)/10;
  u=n%10; 
  sc=uc+c+d+u;
  cout<<"La Suma de cifras es:"<<sc<<endl;
 }
 else
 {
  cout<<"no es un numero de 4 cifras"<<endl;
 }
 system("pause");
}
