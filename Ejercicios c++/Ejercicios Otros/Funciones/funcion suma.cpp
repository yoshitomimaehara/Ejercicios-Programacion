#include <iostream>
#include <conio.h>
using namespace std;

int suma(int,int);

int main()
{
int a,b,s;
cout<<"ingrese dos numeros"<<endl;
cout<<"ingrese el primer numero:";cin>>a;
cout<<"ingrese el segundo numero:";cin>>b;
s=suma(a,b);
cout<<"la suma es:"<<s<<endl;
getch();
}

int suma(int a,int b)
{
return a+b;
}
