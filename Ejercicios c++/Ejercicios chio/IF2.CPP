#include<iostream.h>
#include<conio.h>
main()
{
float a;
clrscr();
cout<<"Ingrese un n£mero real: "; cin>>a;
if(a<0)
cout<<"N£mero negativo";
else if(a>=0 && a<=100)
cout<<"\n"<<"El n£mero esta ente 0 y 100";
else
cout<<"Numero mayor a 100";
getch();
}