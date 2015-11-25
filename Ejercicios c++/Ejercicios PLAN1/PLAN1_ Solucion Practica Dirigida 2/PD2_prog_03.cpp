#include<iostream.h>
int main()
{
    //Declarando variables    
    char cod[6];  
    float p_costo,ganan,p_venta;
    
    //Ingresando los datos 
    cout<<"Codigo => ";cin>>cod;
    cout<<"Precio de costo => ";cin>>p_costo;
    cout<<"\n\n";
    
    //Haciendo los cálculos
    ganan = 0.28*p_costo;
    p_venta = p_costo+ganan;    
    
    //Mostrando la salida
    cout<<"  Ganancia : "<<ganan<<"\n";  
    cout<<"  Precio de venta : "<<p_venta; 
    
    //Lo de siempre
    cout<<"\n\n";
    system("PAUSE");
    return 0; 
}
