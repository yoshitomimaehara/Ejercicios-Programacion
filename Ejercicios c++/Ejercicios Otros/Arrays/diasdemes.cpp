#include<iostream>
using namespace std;

int main()
{
 int diasmes[]={31,28,31,30,31,30,
                31,31,30,31,30,31};
 /*
 diasmes[] usa la 
 cantidad de elementos
 inicializados
 */
 int i;
                  
 cout<<"ingrese el numero de mes:";cin>>i;
 cout<<"la cantidad de dias es:"<<diasmes[i-1];
 cout<<"\n";
 system("pause");
}
