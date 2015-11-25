#include <iostream>
#include <string>
using namespace std;
int main()
{
int n,i;
string nom;
cout<<"ingrese el numero:";cin>>n;
cout<<"ingrese un nombre:";cin>>nom;
   if(n % 2 ==0)
   {
  for(i=0;i++ <2;)
  {       
  cout<<nom<<endl;           
  }
             }
   else
   {
   for(i=0;i++ <3;)
  {       
  cout<<nom<<endl;           
  }  
       }
 system("pause") ;               
}
