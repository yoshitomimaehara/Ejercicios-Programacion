#include<iostream.h>

int main()
{
 double p,d,pf;
 char desc;
 
 cout<<"ingrese la descripcion del microprocesador(i,a,o):";cin>>desc;
 cout<<"ingrese el precio del microprocesador:";cin>>p;
 
 
 if(desc=='i' || desc=='a')
 {
  d=p*0.12;
  pf=p-d;
  cout<<"descuento:"<<d<<"\n";
  cout<<"precio final:"<<pf<<"\n";
 }
 
 system("pause");
}
