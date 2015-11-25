#include<iostream.h>

int main()
{
 int ep,ef,prom;
 char nom[10];
 
 cout<<"ingrese el nombre:";cin>>nom;
 cout<<"ingrese la nota de su parcial:";cin>>ep;
 cout<<"ingrese la nota de su final:";cin>>ef;
 
 prom=(ep+ef)/2;
 cout<<"promedio:"<<prom<<"\n";
 if(prom>11)
  cout<<"Aprobado";
 else
  cout<<"Desaprobado";
 cout<<"\n";
 system("pause");
}
