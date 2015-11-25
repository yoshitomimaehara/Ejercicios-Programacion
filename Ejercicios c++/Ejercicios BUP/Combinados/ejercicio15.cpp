#include <iostream>
using namespace std;
int main()
{
    long int n;
    cout<<"ingrese el numero:";cin>>n;
    if(n>=1000 && n<6666)
    {
    if(n%1111==0 && n%2==0)
    {
     cout<<"es capicua par menor que 6666"<<endl;         
              }
     else
     {
      cout<<"no es capicua par menor que 6666"<<endl;   
         }                            
                       }
     else
     {
      cout<<"no es un numero de 6 cifras"<<endl;   
         }
  system("pause");       
}
