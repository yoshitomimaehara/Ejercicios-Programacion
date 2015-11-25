#include<iostream.h>
int main()
{
    //Declarando variables   
    int peso1,peso2,peso3;
    double p1kg,p2kg,p3kg,peso_prom;
    
    //Ingresando los datos 
    cout<<"Peso 1 => ";cin>>peso1;
    cout<<"Peso 2 => ";cin>>peso2;
    cout<<"Peso 3 => ";cin>>peso3;
    cout<<"\n\n";
    
    //Haciendo los cálculos
    p1kg = peso1/1000.0;
    p2kg = peso2/1000.0;
    p3kg = peso3/1000.0;
    peso_prom = (p1kg+p2kg+p3kg)/3.0;  
      
    //Mostrando la salida
    cout<<"  Peso promedio en kilos : "<<peso_prom; 
         
    //Lo de siempre
    cout<<"\n\n";
    system("PAUSE");
    return 0; 
}
