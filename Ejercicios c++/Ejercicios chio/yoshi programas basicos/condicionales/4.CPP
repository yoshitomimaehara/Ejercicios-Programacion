#include<iostream.h>
#include<conio.h>
#include<math.h>
main()
{
float a,b,c;
clrscr();
cout<<"Ingresar un numero:";cin>>a;
cout<<"Ingresar un numero:";cin>>b;
cout<<"Ingresar un numero:";cin>>c;
if(a>b && b>c)
cout<<"el segundo mayor es:"<<b;
else       
if(b>a && a>c)
cout<<"el segundo mayor es:"<<a;
else
if(a>c && c>b)
cout<<"el segundo mayor es:"<<c;
getch();
}