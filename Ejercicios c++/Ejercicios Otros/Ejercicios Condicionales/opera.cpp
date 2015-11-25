#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
int a,b,opcion;
float R;
cout<<"Ingrese dos numeros"<<endl;
cout<<"Ingresa el primer numero:";
cin>>a;
cout<<"Ingresa el segundo numero:";
cin>>b; 
cout<<endl<<"Menu"<<endl<<endl;
cout<<"1.Sumar"<<endl;
cout<<"2.Restar"<<endl;
cout<<"3.Multiplicar"<<endl;
cout<<"4.Dividir"<<endl;
cout<<endl<<"Elija una opcion:";
cin>>opcion;
cout<<endl;
switch(opcion)
{
case 1:R=a+b;
break;
case 2:R=a-b;
break;
case 3:R=a*b;
break;
case 4:R=a/b;           
break;
             }
cout<<"el resultado es:"<<R<<endl;             
system("PAUSE");
return 0;
    }
    
