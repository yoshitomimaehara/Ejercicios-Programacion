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
           cout<<"Primer Trimestre";
           break;
      case 4:
      case 5:
      case 6:
           cout<<"Segundo Trimestre";
           break;
      case 7:
      case 8:
      case 9:
           cout<<"Tercer Trimestre";
           break;
      case 10:
      case 11:
      case 12:
           cout<<"Cuarto Trimestre";
           break;        
 }
}
else
cout<<"respuesta Invalida";
cout<<"\n";
system("pause");
}
