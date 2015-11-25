#include<iostream.h>
int main()
{
    //Declarando variables
    int n,u,d;
    float pc;
    
    //Ingresando el numero 
    cout<<"Ingrese el numero => ";cin>>n;
    
    //Haciendo los cálculos
    d=n/10;
    u=n%10;
    pc=(u+d)/2;
    
    //Mostrando la salida
    cout<<"el promedio de cifras es:"<<pc<<"\n";
    
    //Lo de siempre
    cout<<"\n\n";
    system("Pause");
    return 0;
}
