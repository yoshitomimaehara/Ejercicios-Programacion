#include<iostream.h>
int main()
{
    int t1,t2;
    float tprom;
    char marca[15];       
    cout<<"Digite la marca => ";cin>>marca;    
    cout<<"Tiempo 1 => ";cin>>t1;   
    cout<<"Tiempo 2 => ";cin>>t2;   
    tprom=(t1+t2)/2.0;    
    cout<<"\n\n Tiempo Promedio : "<<tprom;  
    if (tprom>=20 && tprom<25)
       cout<<"\n Calificacion : EXCELENTE";
    else if (tprom>=26 && tprom<30)
       cout<<"\n Calificacion : BUENO";
    else if (tprom>=31 && tprom<35)
       cout<<"\n Calificacion : REGULAR";
    else if (tprom>=36 && tprom<40)
       cout<<"\n Calificacion : DEFICIENTE "; 	  
    else if (tprom>=41 && tprom<45)
       cout<<"\n Calificacion : <PESIMO";    
    else
       cout<<"\n Sin calificacion";
    cout<<"\n\n";    
    system("PAUSE");
    return 0;
}
