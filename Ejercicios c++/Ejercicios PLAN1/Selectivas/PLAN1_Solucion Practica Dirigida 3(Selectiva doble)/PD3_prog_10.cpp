#include<iostream.h>
int main()
{
    int soles;   
    float dolares,euros;
    char moneda,nom[10]; 
    cout<<"Nombre => ";cin>>nom;   
    cout<<"Soles a cambiar => ";cin>>soles;   
    cout<<"Moneda a cambiar (d - e) => ";cin>>moneda;
    if (moneda == 'd')
    {
        dolares=soles/2.78;
        cout<<"\n  Resultado : "<<dolares<<" Dolares\n\n";    
    }    
    else
    {
       euros=soles/3.60;  
       cout<<"\n  Resultado : "<<euros<<" Euros\n\n";   
    }         
    system("PAUSE");
    return 0;
}
