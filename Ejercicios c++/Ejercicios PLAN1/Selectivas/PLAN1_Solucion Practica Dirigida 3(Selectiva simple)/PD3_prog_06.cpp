#include<iostream.h>
int main()
{
    int importe;
    float descto,importeFinal;
    char nom[10];
    cout<<"Nombre  => ";cin>>nom;
    cout<<"Importe => ";cin>>importe;
    if (importe >= 150)
    {
        descto = 0.12*importe;
        importeFinal = importe-descto;
        cout<<"\n Descuento     : "<<descto;
        cout<<"\n Importe final : "<<importeFinal;
    }    
    cout<<"\n\n";
    system("PAUSE");
    return 0;
}
