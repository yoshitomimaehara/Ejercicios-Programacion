#include <iostream>
#include <string>
using namespace std;
int main()
{
 string nom_emp;
 int prim_bol,ult_bol,cant_bol;
 double precio_bol,imp_bol;
 cout<<"Ingrese el Nombre de la Empresa:";cin>>nom_emp;
 cout<<"Ingrese la Numeracion del Primer Boleto:";cin>>prim_bol;
 cout<<"Ingrese la Numeracion del Ultimo Boleto:";cin>>ult_bol;
 cout<<"Ingrese el precio del boleto:";cin>>precio_bol;
 cant_bol=ult_bol-prim_bol+1;
 if(cant_bol>500)
 {
    imp_bol=cant_bol*precio_bol;
    cout<<"La Cantidad de Boletos es:"<<cant_bol<<endl;
    cout<<"El Importe de los Boletos Vendidos:"<<imp_bol<<endl;
 }
 system("pause");
}
