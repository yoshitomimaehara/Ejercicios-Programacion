#include<iostream.h>
#include<conio.h>
main()
{
int cod,cant,ct,c;
float v,vt;
clrscr();
vt=0;
ct=0;
do
{
cout<<"ingrese la cantidad de articulos:";cin>>cant;
cout<<"ingrese el codigo del producto";cin>>cod;
if(cod>4)
{
cout<<"C¢digo inexistente";
cant=cant*0;
do
{
cout<<"ingrese la cantidad de articulos:";cin>>cant;
cout<<"ingrese el codigo del producto";cin>>cod;
switch(cod)
{
case 1:v=4*cant;break;
case 2:v=5.5*cant;break;
case 3:v=6*cant;break;
case 4:v=6,5*cant;break;
}
c=cant;
ct=ct+c;
vt=vt+v;
}
while(cant>0);
cout<<"la venta total del dia es:"<<vt;
cout<<"La cantidad vendida es:"<<ct;
}
else
switch(cod)
{
case 1:v=4*cant;break;
case 2:v=5.5*cant;break;
case 3:v=6*cant;break;
case 4:v=6,5*cant;break;
}
c=cant;
ct=ct+c;
vt=vt+v;
}
while(cant>0);
cout<<"la venta total del dia es:"<<vt;
cout<<"La cantidad vendida es:"<<ct;
getch();
} 