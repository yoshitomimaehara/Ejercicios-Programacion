#include<iostream.h>
#include<math.h>
int main()
{
    //Declarando variables
    double ca,co,h;
    
    //Ingresando el valor del cateto opuesto y del cateto adyacente
    cout<<"Ingrese el valor del cateto opuesto => ";cin>>co;
    cout<<"Ingrese el valor del cateto adyacente => ";cin>>ca;
    
    //Calculando la hipotenusa
    h=sqrt(pow(co,2)+pow(ca,2));
    
    //Mostrando la hipotenusa
    cout<<"hipotenusa:"<<h<<"\n";
    
    //Lo de siempre
    cout<<"\n\n";
    system("Pause");
    return 0;
}
