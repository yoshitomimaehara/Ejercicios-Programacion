#include<iostream.h>
#include<conio.h>
main()
{
float a,b,c;
clrscr();
cout<<"Ingrese los n£meros: "; cin>>a>>b>>c;
if(a>=b && b>=c)
cout<<"El orden creciente de los n£meros ingresados es: "<<c<<" "<<b<<" "<<a<<;
else if(a>=c && c>=b)
cout<<"El orden creciente de los n£meros ingresados es: "<<b<<" "<<c<<" "<<a<<;
else if(b>=a && a>=c)
cout<<"El orden creciente de los n£meros ingresados es: "<<c<<" "<<a<<" "<<b<<;
else if(b>=c && c>=a)
cout<<"El orden creciente de los n£meros ingresados es: "<<a<<" "<<c<<" "<<b<<;
else if(c>=a && a>=b)
cout<<"El orden creciente de los n£meros ingresados es: "<<b<<" "<<a<<" "<<c<<;
else
cout<<"El orden creciente de los n£meros ingresados es: "<<a<<" "<<b<<" "<<c<<;
getch();
}