#include<iostream.h>

int main()
{
int mes;

cout<<"ingrese el numero de mes:";cin>>mes;
if(mes>=1 && mes<=12)
{
switch(mes)
{
      case 1:
      case 2:
      case 3:
      case 12:
           cout<<"Verano";
           break;
      case 4:
      case 5:

           cout<<"Otoño";
           break;
      case 6:
      case 7:
      case 8:
      case 9:
           cout<<"Invierno";
           break;
      case 10:
      case 11:
           cout<<"Primavera";
           break;        
 }
}
else
cout<<"respuesta Invalida";
cout<<"\n";
system("pause");
}
