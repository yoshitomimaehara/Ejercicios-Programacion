#include<iostream.h>
int main()
{
    //Declarando variables   
    int numVarones,numDamas,totAlumnos; 
    float porcVarones,porcDamas;   
    
    //Ingresando los datos 
    cout<<"\n Numero de varones => ";cin>>numVarones; 
    cout<<"\n Total de alumnos  => ";cin>>totAlumnos;    
    cout<<"\n\n";
    
    //Haciendo los cálculos
    numDamas = totAlumnos-numVarones;    
    porcVarones = numVarones*100.00/totAlumnos;
    porcDamas =  100.00-porcVarones;
    
    //Mostrando la salida
    cout<<" Numero de damas : "<<numDamas<<"\n";      
    cout<<" Porcentaje de damas   : "<<porcDamas<<"\n";
    cout<<" Porcentaje de varones : "<<porcVarones;
    
    //Lo de siempre
    cout<<"\n\n";
    system("PAUSE");
    return 0; 
}

