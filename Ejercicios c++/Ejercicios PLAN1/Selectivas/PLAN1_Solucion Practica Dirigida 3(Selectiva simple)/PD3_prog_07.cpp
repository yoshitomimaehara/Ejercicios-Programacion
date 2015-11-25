#include<iostream.h>
int main()
{
    int numPiezas,numPiezasAdic;
    float sueldo,bonif,sueldoFinal;
    char nom[10];
    cout<<"Nombre  => ";cin>>nom;
    cout<<"Sueldo  => ";cin>>sueldo;
    cout<<"Numero de piezas => ";cin>>numPiezas;
    if (numPiezas > 350)
    {
        numPiezasAdic = numPiezas-350;
        bonif = 2.5*numPiezasAdic;
        sueldoFinal = sueldo+bonif;
        cout<<"\n Bonificacion : "<<bonif;
        cout<<"\n Sueldo final : "<<sueldoFinal;
    }    
    cout<<"\n\n";
    system("PAUSE");
    return 0;
}
