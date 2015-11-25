#include <iostream>
#include <math.h>
using namespace std;
int main()
{
 int x;    
 float y;
 cout<<"ingrese el numero:";cin>>x;
 if(x<=15)
 {
 cout<<"No existe solucion en R"<<endl;
 }
 else
 {
  y=x-30+(sqrt(x-15)/(x-10));
  cout<<"el valor de y:"<<y<<endl;   
     } 
     system("pause");   
    }
