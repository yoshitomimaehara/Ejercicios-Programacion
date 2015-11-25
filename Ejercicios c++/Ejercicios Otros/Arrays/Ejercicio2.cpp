#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int i,n[10],s;
float p;
cout<<"ingrese 10 numero enteros"<<endl;
for(i=1;i<=10;i++)
{
cin>>n[i];
                  }
s=0;
for(i=1;i<=10;i++)
{
s+=n[i];
                  }
p=s/10;
cout<<"la suma es:"<<s<<endl;
cout<<"el promedio es:"<<p<<endl;
getche();
}
