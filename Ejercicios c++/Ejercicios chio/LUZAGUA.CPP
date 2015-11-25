#include<iostream.h>
#include<conio.h>
main()
{
float luz, agua, telf, dame,totalso,totalg,cole,obatel,aguab;
clrscr();
cout<<"Ingrese la cantidad a pagar de luz: "; cin>>luz;
cout<<"Ingrese la cantidad a pagar de agua: "; cin>>agua;
cout<<"Ingrese la cantidad a pagar de agua del agua de abajo: "; cin>>aguab;
cout<<"Ingrese la cantidad a pagar de telefono: "; cin>>telf;
cout<<"Ingrese la cantidad a pagar de telefono de oba: "; cin>>obatel;
cout<<"Ingrese la cantidad a pagar al colegio:"; cin>>cole;
dame=(luz/2)+(agua/2)+obatel;
totalso=dame+telf+cole+aguab-obatel;
totalg=luz+agua+telf+cole+aguab+obatel;
cout<<"La cantidad que te tiene que dar Oba: "<<dame;
cout<<"\n"<<"La cantidad a pagar sin que te de la oba es:"<<totalso;
cout<<"\n"<<"La cantidad a pagar en los establecimientos es:"<<totalg;
getch();
}