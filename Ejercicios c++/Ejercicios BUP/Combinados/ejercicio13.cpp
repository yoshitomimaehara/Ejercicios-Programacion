#include <iostream>
using namespace std;
int main()
{
    long int n;
    cout<<"ingrese el numero:";cin>>n;
    if(n>10000 && n<99999)
    {
    if(n%2==0)
    {
     cout<<"es par"<<endl;         
              }
     else
     {
      cout<<"es impar"<<endl;   
         }                            
                       }
     else
     {
      cout<<"no es un numero de 5 cifras"<<endl;   
         }
  system("pause");       
}
