#include<iostream.h>
int main()
{
    //Declarando variables
    int mes,dia,ndias;
    
    //Ingresando el numero de mes y de dias
    cout<<"ingrese el numero de mes => ";cin>>mes;
    cout<<"ingrese el numero de dia => ";cin>>dia;
    ndias=360 - ((mes-1)*30 + dia);
    
    //Mostrando el numero de dias transcurridos
    cout<<"el numero de dias transcurridos:"<<ndias<<"\n";
    
    //Lo de siempre
    cout<<"\n\n";
    system("pause");
    return 0;
}
