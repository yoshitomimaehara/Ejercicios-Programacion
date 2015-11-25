#include<iostream.h>
#include<string.h>

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
system("pause");
}
