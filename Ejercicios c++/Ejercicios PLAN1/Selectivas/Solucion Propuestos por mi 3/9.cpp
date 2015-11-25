#include<iostream.h>

int main()
{
 int e;
 char nom[10];
 
 cout<<"ingrese el nombre:";cin>>nom;
 cout<<"ingrese la edad:";cin>>e;
 
 if(e>17)
  cout<<"Mayor de edad";
 else
  cout<<"Menor de edad";
 cout<<"\n";
 
 system("pause");
}
