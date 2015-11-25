#include <iostream>
using namespace std;
int main()
{
    int n,u,d,c;
    cout<<"ingrese el numero:";cin>>n;
    if(n>99 && n<1000)
    {
    c=n/100;
    d=(n-c*100)/10;
    u=n%10;
    cout<<"la descomposicion es:"<<endl;
    cout<<"c="<<c<<endl;
    cout<<"d="<<d<<endl;
    cout<<"u="<<u<<endl;
    }
    else
    {
    cout<<"no es numero de 3 cifras"<<endl;   
        }
    system("pause");
}
