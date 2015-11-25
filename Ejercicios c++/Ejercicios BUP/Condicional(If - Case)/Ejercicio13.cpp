#include <iostream>
using namespace std;
int main()
{
 int n,a,b,s,r,m,f;
 float d;
 operacion:
 cout<<"\t\t\t\t*************"<<endl;
 cout<<"\t\t\t\t*Operaciones*"<<endl;
 cout<<"\t\t\t\t*************"<<endl;
 cout<<"1.Suma"<<endl;
 cout<<"2.Resta"<<endl;
 cout<<"3.Multiplicacion"<<endl;
 cout<<"4.Division"<<endl;
 cout<<"ingrese la opcion:";cin>>n;
 cout<<"ingrese el primer numero:";cin>>a;
 cout<<"ingrese el seguno numero:";cin>>b;
 switch(n)
 {
case 1:
s=a+b;
cout<<"el resultado es:"<<s<<endl; 
break;
case 2:
r=a-b;
cout<<"el resultado es:"<<r<<endl;
break;
case 3:
m=a*b;
cout<<"el resultado es:"<<m<<endl;
break;
case 4:
if(b!=0)
{
d=a/b;
cout<<"el resultado es:"<<d<<endl;
}
else
{
cout<<"no existe en R"<<endl;
    }
break;
}
cout<<"Desea Hacer otra Operacion(si=1/no=0):";cin>>f;
switch(f)
{
case 0:
system("pause");
break;
case 1:
system("cls");     
goto operacion;        
}      
}
