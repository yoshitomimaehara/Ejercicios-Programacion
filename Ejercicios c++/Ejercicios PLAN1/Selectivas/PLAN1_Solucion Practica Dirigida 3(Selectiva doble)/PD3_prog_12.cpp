#include<iostream.h>
int main()
{
    int horasTrab,horasExtras;   
    float valHoraNormal,pagoTotal,valorHoraExtra;
    char nom[10]; 
    cout<<"Nombre => ";cin>>nom;   
    cout<<"Horas trabajadas => ";cin>>horasTrab;   
    cout<<"Valor de la hora normal => ";cin>>valHoraNormal;
    if (horasTrab <= 48)
    {
        horasExtras=0;
        pagoTotal=horasTrab*valHoraNormal;       
    }    
    else
    {
        horasExtras=horasTrab-48; 
        valorHoraExtra=1.5*valHoraNormal;
        pagoTotal=48*valHoraNormal+valorHoraExtra*horasExtras;     
    }    
    cout<<"\n  Horas extras : "<<horasExtras; 
    cout<<"\n  Pago total   : "<<pagoTotal<<"\n\n";         
    system("PAUSE");
    return 0;
}
