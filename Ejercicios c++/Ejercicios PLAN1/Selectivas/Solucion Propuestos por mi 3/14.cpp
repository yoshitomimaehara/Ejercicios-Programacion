#include<iostream.h>

int main()
{
 int n1,n2,n3,min,max,mid;
 float prom,promf;
 char nom[10];
 
 cout<<"ingrese el nombre:";cin>>nom;
 cout<<"ingrese la nota 1:";cin>>n1;
 cout<<"ingrese la nota 2:";cin>>n2;
 cout<<"ingrese la nota 3:";cin>>n3;
 
 prom=(n1+n2+n3)/3.0;
 
 //bloque medio
 mid=n3;
 if(n1>n2 && n2>n3)
 {
  mid=n2;
 }
  else
 {
  if(n2>n1 && n1>n3)
  mid=n1;
 }
 
 //bloque mayor
 max=n3;
 if(n1>n2 && n1>n3)
 {
  max=n1;
 }
  else
 {
  if(n2>n1 && n2>n3)
  max=n2;
 }
 
 //hallar el menor
  min=n3;
 if(n1<n2 && n1<n3)
 {
  min=n1;
 }
  else
 {
  if(n2<n1 && n2<n3)
  min=n2;
 }
 
 //condicionar promedio
 if(prom<11)
  {
   cout<<"ingrese la nota sustitutoria:";cin>>min;
   promf=(min+max+mid)/3.0;   
  }
 else
  promf=prom;
 cout<<"Promedio final:"<<promf;
 cout<<"\n";
 system("pause");
}
