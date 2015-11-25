#include <iostream>
using namespace std;
int main()
{
int a,b,r;
cout<<"ingrese el primer numero:";cin>>a;
cout<<"ingrese el segundo numero:";cin>>b;
   if(a % 2 == 0 && b % 2 == 0)
   {
   r=a+b;     
  cout<<r<<endl;           
             }
   else if(a % 2 == 0 && b % 2 != 0)
   {
   r=a*b;     
  cout<<r<<endl;           
             }
   else          
   {
   r=a-b;
   cout<<r<<endl;  
       }
 system("pause");
}
