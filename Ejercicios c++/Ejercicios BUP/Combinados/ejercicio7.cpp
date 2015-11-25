#include <iostream>
using namespace std;
int main()
{
int n;
cout<<"ingrese el numero:";cin>>n;
   if(n % 1111 == 0 && n % 2 != 0)
   {
  cout<<"es capicua de 4 digitos impar"<<endl;           
             }
   else
   {
   cout<<"No es capicua de 4 digitos impar"<<endl;  
       }
 system("pause");
}
