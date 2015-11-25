#include<iostream.h>
int main()
{
    //Declarando variables       
    double v,t,v_m_h,e;
    //Ingresando los datos 
    cout<<"Velocidad del Km/h => ";cin>>v;
    cout<<"tiempo en horas => ";cin>>t;    
    cout<<"\n\n";
    //Haciendo los cálculos
    v_m_h=v*1000;
    e=v_m_h*t;     
    //Mostrando la salida
    cout<<"  Espacio : "<<e<<" mts";      
    //Lo de siempre
    cout<<"\n\n";
    system("PAUSE");
    return 0; 
}
