#include<iostream.h>

int main()
{
 int n1,n2,min,max;
 
 cout<<"ingrese el primer numero:";cin>>n1;
 cout<<"ingrese el segundo numero:";cin>>n2;
 
 
 if(n1>n2)
 {
  max=n1;
  min=n2;
 }
 else
 {
  max=n2;
  min=n1;
 }
 cout<<max<<"\n";
 cout<<min<<"\n"; 
 
  system("pause");
}
