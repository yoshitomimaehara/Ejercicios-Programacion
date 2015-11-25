#include<iostream.h>
int main()
{
    //Declarando variables
    int a_nac,edad,edad_antes,edad_despues, edad_actual;
    char nom[12];  
    
    //Ingresando los datos 
    cout<<"Nombre => ";cin>>nom;
    cout<<"Año de nacimiento => ";cin>>a_nac;
    cout<<"\n";
    
    //Calculando las edades
    edad_actual = 2009-a_nac;
    edad_antes = edad_actual-5;
    edad_despues = edad_actual+10;    
    
    //Mostrando en nombre y la edad
    cout<<"\n Su edad actual es : "<<edad_actual;
    cout<<"\n Edad hace 5 años es : "<<edad_antes;
    cout<<"\n Edad dentro de 10 años es : "<<edad_despues;  
    
    //Lo de siempre
    cout<<"\n\n";
    system("PAUSE");
    return 0; 
}
