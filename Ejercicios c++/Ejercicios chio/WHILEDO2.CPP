#include<iostream.h>
#include<conio.h>
main()
{
int c;
float p,v;
clrscr();
do
{
cout<<"Ingrese la cantidad que desea: "; cin>>c;
cout<<"Ingrese el precio del producto: "; cin>>p;
v=c*p;
cout<<"El monto de la venta es: "<<v;
cout<<"\n"<<"\n";
}
while(c>=0 && p>=0);
getch();
}