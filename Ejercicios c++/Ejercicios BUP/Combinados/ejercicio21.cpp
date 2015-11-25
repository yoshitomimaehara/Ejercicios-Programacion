#include <iostream>
using namespace std;
int main()
{
 int n;
 cout<<"ingrese un numero:";cin>>n;
 if(n>=0 && n<=9)
 {
  cout<<"Es de 1 digito"<<endl;
 }
 else if(n>=10 && n<=99)
 {
  cout<<"Es de 2 digito"<<endl;
 }
 else if(n>=100 && n<=999)
 {
  cout<<"Es de 3 digito"<<endl;
 }
 else if(n>=1000 && n<=9999)
 {
  cout<<"Es de 4 digito"<<endl;
 }
 else if(n>=10000 && n<=99999)
 {
  cout<<"Es de 5 digito"<<endl;
 }
 else if(n>=100000 && n<=999999)
 {
  cout<<"Es de 6 digito"<<endl;
 }
system("pause");
}
