#include <iostream>
using namespace std;
int main()
{
int a[20];
int n,s;
s=0;
for(n=1;n<=20;n++)
{
cout<<"ingrese el elemento"<<""<<n<<":";cin>>a[n];                
s= s + a[n];
}
cout<<"la suma es:"<<s<<endl; 
system("pause");
}
