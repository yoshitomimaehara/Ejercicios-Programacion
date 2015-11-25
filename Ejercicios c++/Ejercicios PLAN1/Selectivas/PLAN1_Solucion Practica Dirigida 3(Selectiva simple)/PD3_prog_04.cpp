#include<iostream.h>
int main()
{    
    float sueldo;
    char nom[10],sexo,turno;
    cout<<"Nombre  => ";cin>>nom;
    cout<<"Sueldo  => ";cin>>sueldo;
    cout<<"Sexo    => ";cin>>sexo;
    cout<<"Turno   => ";cin>>turno;    
    if (sexo == 'd' && turno == 't')
    {        
        cout<<"\n Nombre : "<<nom;
        cout<<"\n Sueldo : "<<sueldo;
    }    
    cout<<"\n\n";
    system("PAUSE");
    return 0;
}
