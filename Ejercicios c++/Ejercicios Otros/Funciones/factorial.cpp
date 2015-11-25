#include <iostream>
using namespace std;

int fact(int);

int main()
{
 int n,f;
 cout<<"ingrese el numero: ";cin>>n;
 f=fact(n);
 cout<<"el valor del factorial es: "<<f<<"\n";
 system("pause");
}

int fact(int n)
{
  int fact;
  fact=1;
  while (n>0)
  {
  fact=fact*n;
  n=n-1;
  }
  return fact;
}
