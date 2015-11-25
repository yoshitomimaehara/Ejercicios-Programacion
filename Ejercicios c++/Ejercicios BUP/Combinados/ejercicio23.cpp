#include <iostream>
#include <string>
using namespace std;
int main()
{
 int n1,n2,i;
 string nom;
 cout<<"ingrese el primer numero:";cin>>n1;
 cout<<"ingrese el segundo numero:";cin>>n2;
 cout<<"ingrese el nombre:";cin>>nom;
 if(n1==n2)
 {
  i=0;
  do
  {
   cout<<nom<<endl;
   i++;
  }
  while(i<=15);
 }
 else
 {
  i=0;
  do
  {
   cout<<nom<<endl;
   i++;
  }
  while(i<=25);
 }
 system("pause");
}
