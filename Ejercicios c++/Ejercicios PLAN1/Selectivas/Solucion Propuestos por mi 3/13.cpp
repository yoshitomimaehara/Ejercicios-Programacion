#include<iostream.h>

int main()
{
 double p,d,pf,s;
 int fp;
 char des[20];
 
 cout<<"ingrese descripcion:";cin>>des;
 cout<<"forma de pago(contado:1,credito:2):";cin>>fp;
 cout<<"ingrese el precio del articulo:";cin>>p;
 
 
 if(fp==1)
 {
  d=p*0.05;
  pf=p-d;
  cout<<"descuento:"<<d<<"\n";
  cout<<"precio final:"<<pf<<"\n";
 }
 else
 {
  s=p*0.10;
  pf=p+s;
  cout<<"sobrecargo:"<<d<<"\n";
  cout<<"precio final:"<<pf<<"\n";
 }
 
 system("pause");
}
