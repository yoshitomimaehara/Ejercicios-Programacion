#include <iostream.h>
#include <conio.h>
#include <math.h>
main()
{
int can;
float pr,ven;
clrscr();
do
{
cout<<"Ingrese la cantidad: "; cin>>can;
cout<<"Ingrese el precio: "; cin>>pr;
ven=can*pr;
cout<<"El monto total de la venta: "; cout<<ven;
}
while(can>0);
getch();
}