#include<iostream.h>
#include<conio.h>
main()
{
float venta, d, p;
clrscr();
cout<<"Ingrese el valor de la venta: "; cin>>venta;
if(venta<=1000)
d=0.05*venta;
else if(venta>=1000 && venta<=3000)
d=0.08*venta;
else if(venta>=3000 && venta<=5000)
d=0.15*venta;
else
{d=0.29*venta;}
p=venta-d;
cout<<"Valor de venta="<<venta;
cout<<"\n"<<"Valor de descuento="<<d;
cout<<"\n"<<"Valor a pagar="<<p;
getch();
}