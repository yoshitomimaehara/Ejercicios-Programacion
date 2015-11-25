#include<iostream.h>
int main()
{
    //Declarando variables
    int num,trip_cubo;  
    
    //Ingresando el numero 
    cout<<"Digite un numero entero => ";
    cin>>num;
    cout<<"\n\n";
    
    //Calculando el triple del cubo
    trip_cubo = 3*num*num*num;
    
    //Mostrando el triple del cubo
    cout<<" El resultado es : "<<trip_cubo; 
    
    //Lo de siempre
    cout<<"\n\n";
    system("Pause");
    return 0;  
}
