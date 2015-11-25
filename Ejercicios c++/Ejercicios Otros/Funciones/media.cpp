#include <iostream>
using namespace std;

double media(double x1,double x2);

int main()
{
 double med,numero1,numero2;
 
 cout<<"Ingrese los  2 numeros:";
 cin>>numero1>>numero2;
 med=media(numero1,numero2);
 cout<<"la media es:"<<med<<endl;
 system("pause");
 return 0;
}

double media(double n1,double n2)
{
 return(n1+n2)/2;
}
