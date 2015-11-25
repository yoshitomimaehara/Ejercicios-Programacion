#include <iostream>
using namespace std;
int main()
{
    int n,c,d,u;
    cout<<"ingrese el numero:";cin>>n;
    if(n>99 && n<1000)
    {
    c=n/100;
    d=(n-c*100)/10;
    u=n%10;
    if(c==d==u)
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
    cout<<"no es numero de 3 cifras"<<endl;   
        }
    system("pause");
}
