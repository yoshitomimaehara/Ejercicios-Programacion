#include<iostream.h>

int main()
{
 int ic;
 double icf,r;
 char nomcli[10],t;
 
 cout<<"ingrese el nombre del cliente:";cin>>nomcli;
 cout<<"ingrese importe de compra:";cin>>ic;
 cout<<"ingrese su tipo de tarjeta:";cin>>t;
 if(t=='E')
      r=ic*0.03;
 else if(t=='V')
      r=ic*0.05;
 else if(t=='M')
      r=ic*0.07;
 else if(t=='A')
      r=ic*0.12;
 else if(t=='D')
      r=ic*0.15;
      
 icf=ic+r;
 cout<<"el importe de compra final es:"<<icf;
 cout<<"\n";
 system("pause");
}
