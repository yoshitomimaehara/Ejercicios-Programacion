#include <iostream>
#define pi 3.14
using namespace std;
int main()
{
 int b,h;
 double r,at,pt;
 cout<<"Ingrese la medida de la base:";cin>>b;
 cout<<"Ingrese la medida de la altura:";cin>>h;
 at=b*h+(pi*r*r)/2;
 pt=2*b+2*h+pi*r;
 cout<<"El Area es:"<<at<<endl;
 cout<<"El Perimetro es:"<<pt<<endl;
 system("pause");
}
