#include<iostream.h>
#include<conio.h>
#include<math.h>
main()
{
float a,b,c,d,x1,x2;
clrscr();
cout<<"Ingrese el termino cuadr tico: ";
cin>>a;
cout<<"Ingrese el termino lineal: ";
cin>>b;
cout<<"Ingrese el termino independiente: ";
cin>>c;
d=pow(b,2)-4*a*c;
if(d>=0)
{
x1=(-b+sqrt(d))/2*a;
x2=(-b-sqrt(d))/2*a;
cout<<"\n";
cout<<"las ra¡ces son:"<<"\n";
cout<<"x1="<<x1<<"\n";
cout<<"x2="<<x2;
}
else
cout<<"\n"<<"las ra¡ces son imaginarias";
getch();
}


