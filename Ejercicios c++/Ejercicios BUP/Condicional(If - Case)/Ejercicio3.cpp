#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"ingrese el primer numero:";cin>>a;
    cout<<"ingrese el segundo numero:";cin>>b;
    cout<<"ingrese el tercer numero:";cin>>c;
    if(a>b && a>b)
    {
    cout<<"el mayor es:"<<a<<endl;
    }
    else if(b>a && b>c)
    {
    cout<<"el mayor es:"<<b<<endl;
    }
    else if(c>a && c>b)
    {
    cout<<"el mayor es:"<<c<<endl;
    }
    system("pause");
}
