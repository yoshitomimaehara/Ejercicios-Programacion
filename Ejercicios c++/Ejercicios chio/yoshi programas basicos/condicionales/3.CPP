#include<iostream.h>
#include<conio.h>
#include<math.h>
main()
{
float a, b, c;
clrscr();
cout<<"Ingresar un numero:";cin>>a;
cout<<"Ingresar un numero:";cin>>b;
cout<<"Ingresar un numero:";cin>>c;
if(a>b && a>c)
{
cout<<"el mayor es:"<<a;
}
else       
if(b>a && b>c)
{
cout<<"el mayor es:"<<b;
}
else
if(c>a && c>b)
{
cout<<"el mayor es:"<<c;
}
getch();
}
