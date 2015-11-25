#include<iostream.h>
int main()
{
    //Declarando variables
    int n,u,d,c;
       
    //Ingresando el numero 
    cout<<"Ingrese el numero => ";cin>>n;
    
    //Haciendo los cálculos
    c=n/100;
    d=(n%100)/10;
    u=n%10;
        
    //Mostrando la salida
    cout<<"el numero con las cifras invertidas: "<<u<<d<<c<<"\n";
    
    //Lo de siempre
    cout<<"\n\n";
    system("Pause");
    return 0;
}
