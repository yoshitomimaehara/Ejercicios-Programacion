#include<iostream.h>

int main()
{
 int n1,n2,n3,min,max;
 
 cout<<"ingrese el primer numero:";cin>>n1;
 cout<<"ingrese el segundo numero:";cin>>n2;
 cout<<"ingrese el tercer numero:";cin>>n3;
 
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

//bloque menor
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
 cout<<"el mayor es:"<<max<<"\n";
 cout<<"el menor es:"<<min<<"\n"; 
 
  system("pause");
}
