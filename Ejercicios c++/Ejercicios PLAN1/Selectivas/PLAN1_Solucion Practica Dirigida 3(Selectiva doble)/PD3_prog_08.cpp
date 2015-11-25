#include<iostream.h>
int main()
{    
    float fuerza,nuevaFuerza;   
    cout<<"Fuerza en newtons => ";cin>>fuerza;   
    if (fuerza > 100)
       nuevaFuerza = 0.4*fuerza;
    else
       nuevaFuerza = 1.5*fuerza;        
    cout<<"\n Resultado : "<<nuevaFuerza;
    cout<<"\n\n";        
    system("PAUSE");
    return 0;
}
