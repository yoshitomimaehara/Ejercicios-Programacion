#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"ingrese el primer numero:";cin>>a;
    cout<<"ingrese el segundo numero:";cin>>b;
    cout<<"ingrese el tercer numero:";cin>>c;
    if(a>b && c>b)
    {
    cout<<"el mayor es:"<<b<<endl;
    }
    else if(b>a && c>a)
    {
    cout<<"el mayor es:"<<a<<endl;
    }
    else if(a>c && b>c)
    {
    cout<<"el mayor es:"<<c<<endl;
    }
    system("pause");
}
