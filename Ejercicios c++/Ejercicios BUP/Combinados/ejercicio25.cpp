#include <iostream>
using namespace std;
int main()
{
 int n1,n2,i;
 cout<<"ingrese el primer numero:";cin>>n1;
 cout<<"ingrese el segundo numero:";cin>>n2;
 if(n1<n2)
 {
  for(i=n1;i<=n2;i++)
  {
   cout<<i<<endl;
  }
 }
 else
 {
  cout<<"no se puede!!!"<<endl;
 }
system("pause");
}
