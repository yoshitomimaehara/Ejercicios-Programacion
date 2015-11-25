#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
 char cadena[100],carac;
 int i,longitud;
 bool comp;
 cout<<"ingrese el valor: ";cin>>cadena;
 longitud=strlen(cadena);
 for(i=0;i<longitud;i++)
 {
  if(isdigit(cadena[i]))
  {
   comp=1;
  }
  else
  {
   comp=0;
  }
 }
  if(comp==1)
 {
  cout<<"si es un numero"<<endl;    
 }
 else if(comp==0)
 {
  cout<<"No es un numero"<<endl; 
 }
 system("pause");
 return 0;
}
