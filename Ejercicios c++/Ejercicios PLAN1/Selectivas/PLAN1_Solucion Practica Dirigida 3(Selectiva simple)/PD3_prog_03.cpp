#include<iostream.h>
int main()
{
    int anhoFab,tiempoFab;
    float peso;   
    cout<<"Peso => ";cin>>peso;
    cout<<"Año de fabricacion => ";cin>>anhoFab;
    tiempoFab = 2010-anhoFab;
    if (tiempoFab > 10)
    {
       cout<<"\n Proyectil habilitado";     
       cout<<"\n Tiempo fabricado "<<tiempoFab<<" años";
    }   
    cout<<"\n\n";
    system("PAUSE");
    return 0;
}
