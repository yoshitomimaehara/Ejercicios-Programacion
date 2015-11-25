#include<iostream.h>
int main()
{
    //Declarando variables
    int mes,tm1,tm2,tm3,dia,ndias;
    
    //Ingresando el numero de mes y de dias
    cout<<"ingrese el numero de mes => ";cin>>mes;
    cout<<"ingrese el numero de dia => ";cin>>dia;
    //meses con 31
    if(mes>1 && mes<=3) 
        tm1=1;           
    else if(mes>3 && mes<=5) 
        tm1=2;
    else if(mes>5 && mes<=7)
        tm1=3;
    else if(mes>7 && mes<=8)
        tm1=4;
    else if(mes>8 && mes<=10)
        tm1=5;
    else if(mes>10 && mes<=12)
        tm1=6;
    else
        tm1=0;
    
    //meses con 30
    if(mes>4)
         tm2=1;
    else if(mes>6 && mes<=9)
         tm2=2;
    else if(mes>9 && mes<=11)
         tm2=3;
    else if(mes>11)
         tm2=4;
    else
         tm2=0;

    if(mes>2)
    tm3=1;
    else
    tm3=0;
    
    ndias=tm1*31 + tm2*30 + tm3*29 + (dia-1);
    //Mostrando el numero de dias transcurridos
    cout<<"el numero de dias transcurridos:"<<ndias<<"\n";
    
    //Lo de siempre
    cout<<"\n\n";
    system("pause");
    return 0;
}
