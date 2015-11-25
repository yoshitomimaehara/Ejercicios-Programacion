#include<conio.h>
#include<iostream.h>
main();
{
float v,vt;
int cant,cod;
clrscr();
vt=0;
while(cant>0)
{
cout<<"ingrese el codigo de la Pizza:(americana=1 hawaiana=2 Bolognesa=3 Pepperoni=4 ); cin=>>cod;
cout<<"ingrese la cantidad:;cin>>cant;
switch(cod)
{
case 1: v= cant*6.50 ; break;
case 2: v= cant*5.50 ; break;
case 3: v= cant*6,00 ; break;
case 4: v= cant*6.50 ; break;
}
vt=vt+v;
}
cout<<"la venta total del dia:"<<vt;
getch();
}