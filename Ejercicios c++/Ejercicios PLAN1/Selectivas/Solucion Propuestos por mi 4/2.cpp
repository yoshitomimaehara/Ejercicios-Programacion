#include<iostream.h>

int main()
{
 int n1,n2,n3,max,mid,min;

 cout<<"ingrese el primer numero:";cin>>n1;
 cout<<"ingrese el segundo numero:";cin>>n2;
 cout<<"ingrese el tercer numero:";cin>>n3;

 if(n1>n2 && n2>n3 && n1>n3)
  {
   max=n1;
   mid=n2;
   min=n3;
 }
 else if(n2>n1 && n1>n3)
 {
   max=n2;
   mid=n1;
   min=n3;
 }
 else if(n3>n2 && n2>n1)
 {
   max=n3;
   mid=n2;
   min=n1;
 }
 else if(n1>n3 && n3>n2)
 {
  max=n1;
  mid=n3;
  min=n2;
 }
 else if(n2>n3 && n3>n1)
 {
   max=n2;
   mid=n3;
   min=n1;
 }
 else
 {
   max=n3;
   mid=n1;
   min=n2;
 }

 cout<<max<<"\n";
 cout<<mid<<"\n";
 cout<<min<<"\n";
 system("pause");
}
