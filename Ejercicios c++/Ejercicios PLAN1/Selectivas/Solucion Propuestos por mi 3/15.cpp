#include<iostream.h>

int main()
{
 int ht,j,he;
 char nom[10];
 
 cout<<"ingrese el nombre:";cin>>nom;
 cout<<"ingrese la cantidad de horas trabajadas:";cin>>ht;
 
if(ht>40)
{
 he=ht-40;
 j=400+(he*15);
}
else
 {  
  j=ht*10;
 } 
 cout<<"recibe un jornal de:"<<j;
 
 cout<<"\n";
 system("pause");
}
