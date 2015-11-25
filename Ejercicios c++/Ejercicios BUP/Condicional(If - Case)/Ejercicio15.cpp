#include <iostream>
using namespace std;
int main()
{
int n,m,c,d,u;
cout<<"ingrese el numero:";cin>>n;
if(n>999 && n<10000)
{
m=n/1000;
c=(n-m*1000)/100;
d=((n-m*1000)-c*100)/10;
u=n%10;
if(m==c==u==d)
{
cout<<"es capicua de 4 cifras"<<endl;            
              }
else
{
cout<<"no es capicua de 4 cifras"<<endl; 
    }
}
else
{
cout<<"no es numero de 4 cifras"<<endl; 
    }
    system("pause");                 
    }
