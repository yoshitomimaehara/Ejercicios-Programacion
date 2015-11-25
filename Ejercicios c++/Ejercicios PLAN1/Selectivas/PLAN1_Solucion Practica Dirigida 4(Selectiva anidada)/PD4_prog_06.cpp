#include<iostream.h>
int main()
{
    float impPago,impPagoFinal,descto;
    char nom[15];       
    cout<<"Nombre del cliente => ";cin>>nom;  
    cout<<"Importe de pago => ";cin>>impPago;      
    if (impPago < 50)
       descto=0;
    else if (impPago < 150)
       descto=0.15*impPago;
    else if (impPago < 300)
       descto=0.2*impPago; 	  
    else
       descto=0.35*impPago;    
    impPagoFinal=impPago-descto;
    cout<<"\n Descuento : "<<descto<<"\n";
    cout<<"\n Importe Final : "<<impPagoFinal;
    cout<<"\n\n";    
    system("PAUSE");
    return 0;
}
