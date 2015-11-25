#include <iostream>
using namespace std;
int main()
{
 int x;    
 float y;
 cout<<"ingrese el numero:";cin>>x;
 if(x==2)
 {
 cout<<"No existe solucion en R"<<endl;
 }
 else
 {
  y=-x+(20/(x-2));
  cout<<"el valor de y:"<<y<<endl;   
     } 
     system("pause");   
    }
