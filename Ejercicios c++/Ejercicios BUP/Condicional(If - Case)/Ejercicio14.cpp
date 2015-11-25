#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int a,b,c;
float r,r1,r2,d;
cout<<"Ingrese el coeficiente cuadratico:";cin>>a;
cout<<"Ingrese el coeficiente lineal:";cin>>b;  
cout<<"Ingrese el coeficiente independiente:";cin>>c;
d=pow(b,2)-4*a*c;
if(d==0)
{
r=-b/2*a;
cout<<"r:"<<r<<endl;        
        }
else if(d>0)
{
r1=(-b+sqrt(d))/2*a;
r2=(-b-sqrt(d))/2*a;
cout<<"r1:"<<r1<<endl;
cout<<"r2:"<<r2<<endl;      
     }
else if(d<0)
{
cout<<"Posee Raices Complejas"<<endl;   
     }
system("pause");             
    }
