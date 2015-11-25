#include <iostream>
using namespace std;
int main()
{
    int n,d,u;
    cout<<"ingrese el numero:";cin>>n;
    if(n>9 && n<100)
    {
    d=n/10;
    u=n%10;
    if(d==u)
    {
    cout<<"es capicua"<<endl;
    }
    else
    {
    cout<<"no es capicua"<<endl;   
    }
    }
    else
    {
    cout<<"no es numero de 2 cifras"<<endl;   
        }
    system("pause");
}
