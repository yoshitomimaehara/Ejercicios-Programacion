#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
float a,b,c;
float x1,x2;
cout<<"ingresa el coeficiente cuadratico:";
cin>>a;
cout<<"ingresa el coeficiente lineal:";
cin>>b;
cout<<"ingresa el coeficiente independiente:";
cin>>c;
if(a!=0)
{
 if(b*b-4*a*c>=0)
 {
  x1=(-b+sqrt(b*b-4*a*c))/(2*a);
  x2=(-b-sqrt(b*b-4*a*c))/(2*a);
  cout<<"las Raices son"<<x1<<"y"<<x2<<endl;
  system("PAUSE");
  return 0; 

}   
else
         cout<<"Tiene Raices Complejas"<<endl;
         system("PAUSE");
  return 0; 
 
        }        else
         cout<<"Solo tiene una raiz"<<-b/c<<endl; 
         system("PAUSE");
  return 0;      
       
}

