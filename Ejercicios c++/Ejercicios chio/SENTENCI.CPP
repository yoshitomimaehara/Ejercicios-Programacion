#include <iostream.h>
#include <conio.h>
main()
{
int preg;
float a,b,S,R,M,D;
clrscr();
cout<<"Ingrese el primer n£mero: "; cin>>a;
cout<<"Ingrese el segundo n£mero: "; cin>>b;
cout<<"¨Que operaci¢n desea que se realice con los n£meros? (Suma=1, Resta=2, Multiplicaci¢n=3 Divisi¢n=4) "; cin>>preg;
cout<<"\n";
switch(preg)
{
case 1: {S=a+b; cout<<"La suma es: "<<S;}
break;
case 2: {R=a-b; cout<<"La diferencia es: "<<R;}
break;
case 3: {M=a*b; cout<<"El producto es: "<<M;}
break;
default: {D=a/b; cout<<"El cociente es: "<<D;}
}
getch();
}
