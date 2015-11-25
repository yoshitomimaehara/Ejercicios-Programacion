#include <iostream>
using namespace std;
int main()
{
int a,b,c,d;
cout<<"ingrese el primer numero:";cin>>a;
cout<<"ingrese el segundo numero:";cin>>b;
cout<<"ingrese el tercer numero:";cin>>c;
cout<<"ingrese el cuarto numero:";cin>>d;
   if(a>b && a>c && a>d)
   {
  cout<<"el mayor es"<<" "<<a<<endl;           
             }
   else if(b>a && b>c && b>d)
   {
  cout<<"el mayor es"<<" "<<b<<endl;           
             }
  else if(c>a && c>b && c>d)
   {
  cout<<"el mayor es"<<" "<<c<<endl;           
             }
  else if(d>a && d>c && d>b)
   {
  cout<<"el mayor es"<<" "<<d<<endl;           
             }
         
system("pause") ;
}
