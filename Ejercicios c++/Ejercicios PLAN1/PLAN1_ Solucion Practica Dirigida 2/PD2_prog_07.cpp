#include<iostream.h>
int main()
{
    //Declarando variables      
    double c,r,k;
    
    //Ingresando los datos 
    cout<<"Temperatura en °C => ";cin>>c;    
    cout<<"\n\n";
    
    //Haciendo los cálculos
    k = c+273.00;
    r = (9*c)/5.00+492;       
    
    //Mostrando la salida
    cout<<"  Temperatura en Kelvin  : "<<k<<"\n";
    cout<<"  Temperatura en Rankine : "<<r;    
      
    //Lo de siempre
    cout<<"\n\n";
    system("PAUSE");
    return 0; 
}
