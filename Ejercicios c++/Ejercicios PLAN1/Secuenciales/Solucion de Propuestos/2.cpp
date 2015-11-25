#include<iostream.h>
#define pi 3.14
int main()
{
    //Declarando variables
    double r,h,v,al,at;
    
    //Ingresando el valor del radio y de la altura
    cout<<"Ingrese el valor del radio => ";cin>>r;
    cout<<"Ingrese el valor de la altura => ";cin>>h;
    
    //Calculando el area lateral,area total y volumen del cilindro
    al=2*pi*r*h;
    at=al+2*pi*r*r;
    v=pi*r*r*h;
    
    //Mostrando el area lateral,area total y volumen del cilindro
    cout<<"area lateral :"<<al<<"\n";
    cout<<"area total:"<<at<<"\n";
    cout<<"volumen:"<<v<<"\n";
    
    //Lo de siempre
    cout<<"\n\n";
    system("Pause");
    return 0;
}
