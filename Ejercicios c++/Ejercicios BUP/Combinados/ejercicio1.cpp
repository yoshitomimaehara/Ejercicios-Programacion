#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
int n,u,d,c,um,dm;
cout<<"ingresar el numero:";cin>>n;
if(n>9999 && n<100000)
{
dm=n/10000;
um=(n-(dm*10000))/1000;
c=((n - dm* 10000) - (um*1000))/100;
d=(((n-(dm*10000))-(um*1000))-(c*100))/10;
u= n % 10;

if(u==d && d==c && c==um && um==dm)
{
cout<<"Es capicua de 5 digitos"<<endl;
}
else if(u==d && d==um && um==dm)
{
cout<<"Es capicua de 5 digitos"<<endl;
}
else
{
cout<<"No Es capicua de 5 digitos"<<endl;
}
}
else
{
cout<<"No Es de 5 digitos"<<endl;
}
getch();
    }
