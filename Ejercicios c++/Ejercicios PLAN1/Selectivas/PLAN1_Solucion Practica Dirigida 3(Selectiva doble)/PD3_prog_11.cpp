#include<iostream.h>
int main()
{
    int nt1,nt2,nt3;   
    float prom;
    char nom[10]; 
    cout<<"Nombre => ";cin>>nom;   
    cout<<"Nota 1 => ";cin>>nt1;   
    cout<<"Nota 2 => ";cin>>nt2;   
    cout<<"Nota 3 => ";cin>>nt3;   
    prom=(nt1+nt2+nt3)/3.0;    
    if (prom >= 10.5)
       cout<<"\n Promedio : "<<prom<<" Aprobado";       
    else
       cout<<"\n Promedio : "<<prom<<" Desaprobado";    
    cout<<"\n\n";         
    system("PAUSE");
    return 0;
}
