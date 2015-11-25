#include<iostream.h>
#include<conio.h>
main()
{
int cant, cod, ct1, ct2, ct3, ct;
float v, vt;
vt=0; ct1=0; ct2=0; ct3=0;
clrscr();
cout<<"Cantidad: "; cin>>cant;
cout<<"codigo: "; cin>>cod;
while(cant>0)
{
if(cod==1)
{
v=cant*4;
ct1=ct1+cant;
}
else if(cod==2)
{
v=cant*5;
ct2=ct2+cant;
}
else if(cod==3)
{
v=cant*6;
ct3=ct3+cant;
}
else
{
cout<<"no existe";
}
vt=vt+v;
ct=ct1+ct2+ct3;
}
cout<<"venta: "<<vt;
cout<<"Cantidad: "<<ct;
getch();
}
