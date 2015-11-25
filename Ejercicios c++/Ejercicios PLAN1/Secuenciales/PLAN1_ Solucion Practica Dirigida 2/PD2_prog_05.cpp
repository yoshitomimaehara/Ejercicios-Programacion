#include<iostream.h>
int main()
{
    //Declarando variables   
    int alt;
    double alt_pul,alt_yar,alt_pie;
    
    //Ingresando los datos 
    cout<<"Altura del proyectil (metros) => ";cin>>alt;    
    cout<<"\n\n";
    
    //Haciendo los cálculos
    alt_pul = alt*39.37;
    alt_yar = alt*1.904;
    alt_pie = alt*3.281;    
    
    //Mostrando la salida
    cout<<"  En pulgadas : "<<alt_pul<<"\n";  
    cout<<"  En yardas   : "<<alt_yar<<"\n";
    cout<<"  En pies     : "<<alt_pie;   
     
    //Lo de siempre
    cout<<"\n\n";
    system("PAUSE");
    return 0; 
}
