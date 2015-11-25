#include <iostream>
using namespace std;
int main()
{
    int n,u,d;
    cout<<"ingrese el numero:";cin>>n;
    if(n>9 && n<100)
    {
    d=n/10;
    u=n%10;
    cout<<"la descomposicion es:"<<endl;
    cout<<"d="<<d<<endl;
    cout<<"u="<<u<<endl;
    }
    else
    {
    cout<<"no es numero de 2 cifras"<<endl;   
        }
    system("pause");
}
