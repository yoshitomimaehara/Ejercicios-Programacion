#include<iostream.h>
int main()
{
    //Declarando variables
    int f,a,m;
    
    //Ingresando el valor de la aceleracion y de la masa
    cout<<"Ingrese el valor de la aceleracion => ";cin>>a;
    cout<<"Ingrese el valor de la masa => ";cin>>m;
    
    //Calculando la fuerza
    f=m*a;
    
    //Mostrando la fuerza
    cout<<"la fuerza es:"<<f<<"\n";
    
    //Lo de siempre
    cout<<"\n\n";
    system("Pause");
    return 0;
}
