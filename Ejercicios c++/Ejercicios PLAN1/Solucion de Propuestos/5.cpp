#include<iostream.h>
#define dolar 2.7//dolar 16/11/11
#define igv 0.19
int main()
{
    //Declarando variables
    char nom[10];
    double pd,igvap,pfs;
    
    //Ingresando el precio en dolares y el nombre del dispositivo
    cout<<"Ingrese el nombre del dispositivo => ";cin>>nom;
    cout<<"Ingrese el precio en dolares => ";cin>>pd;
    
    //Calculando el igv y el precio final en soles
    igvap=pd*igv;
    pfs=(pd-igvap)/dolar;
    
    //Mostrando la fuerza
    cout<<"el igv:"<<igvap<<"\n";
    cout<<"precio final en soles:"<<pfs<<"\n";
    
    //Lo de siempre
    cout<<"\n\n";
    system("Pause");
    return 0;
}
