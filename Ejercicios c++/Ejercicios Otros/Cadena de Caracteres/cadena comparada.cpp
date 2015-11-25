/*todavia esta incompleta*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
int lim,i;
char palabra[20];

cout<<"ingrese palabra:";cin>>palabra;
i=0;
lim=strlen(palabra);
while(i<lim)
{
 cout<<palabra[i];
 i++;
}
cout<<"\n"; 
if(palabra[0]=='m' && palabra[1]=='u')
 cout<<"empieza con mu";

cout<<"\n";                 
system("pause");
}
