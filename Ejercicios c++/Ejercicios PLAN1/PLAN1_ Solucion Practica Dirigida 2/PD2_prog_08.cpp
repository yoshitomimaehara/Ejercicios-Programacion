#include<iostream.h>
int main()
{
    //Declarando variables   
    int X1,X2,Y1,Y2;
    double m;
    
    //Ingresando los datos 
    cout<<"Punto 1 \n";
    cout<<"X1 => ";cin>>X1;
    cout<<"Y1 => ";cin>>Y1;
    cout<<"Punto 2 \n";
    cout<<"X2 => ";cin>>X2;
    cout<<"Y2 => ";cin>>Y2;    
    cout<<"\n\n";
    
    //Haciendo los cálculos
    m = (Y1-Y2)/(X1-X2)*1.0;   
     
    //Mostrando la salida
    cout<<"  Su pendiente es : "<<m;  
        
    //Lo de siempre
    cout<<"\n\n";
    system("PAUSE");
    return 0; 
}
