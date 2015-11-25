#include<iostream.h>
#include<conio.h>
main()
{
float f, g, op;
int preg;
clrscr();
cout<<"Ingrese dos n£meros: ";
cin>>f>>g;
cout<<"¨Qu‚ operaci¢n desea realizar con los n£meros?";
cout<<"(Suma=1 Resta=2 Multiplicaci¢n=3 Divisi¢n=4)"; cin>>preg;
switch(preg)
{
case 1: {op=f+g; cout<<"Suma";}
break;
case 2: {op=f-g; cout<<"Resta";}
break;
case 3: {op=f*g; cout<<"Multiplicaci¢n";}
break;
case 4: {op=f/g; cout<<"Divisi¢n";}
break;
default: {cout<<"error";}
}
cout<<"\n"<<"Los numeros ingresados son: "<<f<<"y "<<g;
cout<<"\n"<<"El resultado al efectuar la operaci¢n es: "<<op;
getch();

}

