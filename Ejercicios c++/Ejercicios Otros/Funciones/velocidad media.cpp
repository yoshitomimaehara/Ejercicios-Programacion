#include <iostream>
using namespace std;

float vmedia(float xi,float xf,float t);

int main()
{
    float vm,xi,xf,t;
    cout<<"Ingrese la posicion inicial:";cin>>xi;
    cout<<"Ingrese la posicion final:";cin>>xf;
    cout<<"ingrese el tiempo:";cin>>t;
    vm=vmedia(xi,xf,t);
    cout<<"La velocidad media es:"<<vm<<endl;
    system("pause");
}

float vmedia(float xi,float xf,float t)
{
    return (xf-xi)/t; 
}
