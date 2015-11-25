#include <iostream>
using namespace std;
int main()
{
    float s,p,sa;
    cout<<"ingresar el sueldo:";cin>>s;
    cout<<"ingresar el porcentaje(ingrese el valor):";cin>>p;
    sa=s+(s*(p/100));
    cout<<"El sueldo es:"<<sa<<endl;
    system("Pause");
}    
