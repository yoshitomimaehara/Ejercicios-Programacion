#include <cstdlib>
#include <iostream>
using namespace std;

void paso_por_valor(int x);

int main(int argc,char *argv[])
{
 int x=20;
 
 cout<<"antes de la llamada a paso_por_valor "<<x<<endl;
 paso_por_valor(x);
 cout<<"despues de la llamada a paso_por_valor "<<x<<endl;
 system("pause");
 return EXIT_SUCCESS;
}

void paso_por_valor(int x)
{
cout<<"dentro de paso_por_valor "<<x<<endl;
x*=2;
cout<<"despues de x*=2 y dentro de paso_por_valor "<<x<<endl;
}
