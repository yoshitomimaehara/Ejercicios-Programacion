#include <iostream.h>
#include <conio.h>
main()
{
float x, y, op;
int preg;
clrscr();
cout<<"Ingrese los n£meros con los cuales deses realizar la operaci¢n: ";
cout<<"\n"<<"El primer n£mero es: "; cin>>x;
cout<<"\n"<<"El segundo n£mero es: "; cin>>y;
cout<<"¨Qu‚ operaci¢n desea realizar con los n£meros?";
cout<<"(Suma=1, Resta=2, Multiplicaci¢n=3 Divisi¢n=4) ";
cin>>preg;
switch(preg)
{
case 1: {op=x+y; cout<<"Suma";}
break;
case 2: {op=x-y; cout<<"Resta";}
break;
case 3: {op=x*y; cout<<"Multiplicaci¢n";}
break;
case 4: {op=x/y; cout<<"Divisi¢n";}
break;
default: cout<<"No existe esa operaci¢n en el rango a evaluar";
}
cout<<"\n"<<"Los n£meros ingresados son: "<<x<<" y "<<y;
cout<<"\n"<<"El resultado de la operaci¢n realizada es: "<<op;
getch();
}
