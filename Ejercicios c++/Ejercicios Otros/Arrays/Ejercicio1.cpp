#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int i;
int n[10];
for(int i=1;i<=10;i++)
{
cout<<"ingrese el numero"<<" "<<i<<":";cin>>n[i];
        }
cout<<"Los Numeros Ingresados son:"<<endl;
for(int i=1;i<=10;i++)
{
cout<<n[i]<<endl;
}
getch();
}
