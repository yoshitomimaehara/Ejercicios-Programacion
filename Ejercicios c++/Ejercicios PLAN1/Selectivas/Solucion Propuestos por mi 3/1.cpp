#include<iostream.h>

int main()
{
 int n1,n2,min;
 
 cout<<"ingrese el primer numero:";cin>>n1;
 cout<<"ingrese el segundo numero:";cin>>n2;
 
 min=n1;
 if(n1>n2)
 {
  min=n2;
 }
 
 cout<<"el menor es:"<<min<<"\n";
 
 system("pause");
}
