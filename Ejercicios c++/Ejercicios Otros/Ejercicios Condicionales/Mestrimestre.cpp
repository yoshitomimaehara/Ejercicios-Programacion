#include <iostream>
using namespace std;
int main()
{
int mes;
 cout<<"ingrese el mes:";
 cin>>mes;
 if(mes>0 && mes<13)
 {
 switch(mes)
    {
   case 1:
   case 2:
   case 3:
    cout<<"Primer Trimestre"<<endl;
    break;
   case 4:
   case 5:
   case 6:
    cout<<"Segundo Trimestre"<<endl;
    break;
   case 7:
   case 8:
   case 9:
    cout<<"Tercer Trimestre"<<endl;
    break;
   case 10:
   case 11:
   case 12:
    cout<<"Cuarto Trimestre"<<endl;
    break;    
    }
   }
  else
  {
  cout<<"Error en numero de mes"<<endl; 
 }
 system("pause");
}
