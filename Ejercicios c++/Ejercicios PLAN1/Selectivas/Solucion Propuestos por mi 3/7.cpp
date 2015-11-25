#include<iostream.h>

int main()
{
 int s,aingreso,atraba;
 char nomtra[10],sex,turn;
 
 cout<<"ingrese el nombre del trabajador:";cin>>nomtra;
 cout<<"ingrese el año de ingreso:";cin>>aingreso;
 cout<<"ingrese sueldo:";cin>>s;
 cout<<"ingrese el sexo:";cin>>sex;//masculino=m , femenino=f
 cout<<"ingrese el turno:";cin>>turn;//mañana=m , tarde=t , noche=n
 
 atraba=2011-aingreso;
 
 if(atraba>10 && turn=='n' && sex=='f')
 {
  cout<<nomtra<<"\n";
  cout<<s<<"\n";
 }
 
 system("pause");
}
