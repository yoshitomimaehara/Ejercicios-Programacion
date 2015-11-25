#include <iostream>
using namespace std;
int main()
{

 int m;
 char t;
 float camb;
 cout<<"Ingrese el Monto(en Soles):";cin>>m;
 cout<<"Ingrese el Tipo de Cambio(D,E):";cin>>t;
  if(t='d')
  {
    camb=m/2.75;
    cout<<"El Cambio es:"<<camb<<endl;
  }
  else
  {
     camb=m/3.98;
     cout<<"El Cambio es:"<<camb<<endl;
  } 
 system("pause");
}
