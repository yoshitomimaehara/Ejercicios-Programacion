#include<iostream.h>
int main()
{
    int anhoFab,tiempoFab;
    float peso;   
    cout<<"Peso => ";cin>>peso;
    cout<<"A�o de fabricacion => ";cin>>anhoFab;
    tiempoFab = 2010-anhoFab;
    if (tiempoFab > 10)
    {
       cout<<"\n Proyectil habilitado";     
       cout<<"\n Tiempo fabricado "<<tiempoFab<<" a�os";
    }   
    cout<<"\n\n";
    system("PAUSE");
    return 0;
}
