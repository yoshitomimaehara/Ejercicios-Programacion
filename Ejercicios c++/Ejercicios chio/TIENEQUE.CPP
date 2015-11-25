#include<iostream.h>
#include<conio.h>
main()
{
int   i;
float c[15],d[15],s[15],t[15],sc[15],su[15],prome,prom;
s[15]=0; sc[15]=0; t[15]=0; su[15]=0;
clrscr();
for(i=1;i<=15;i++)
{
cout<<"Ingrese el valor "<<i<<" del arreglo: "; cin>>c[15]; cout<<"\n";
}

for(i=1;i<=15;i++)
{
s[15]=s[15]+c[i];
}
prom=s[15]/15;
for(i=1;i<=15;i++)
{
sc[15]=sc[15]+((c[i]-prom)*(c[i]-prom));
}
cout<<"La suma de cuadrados corregida del vector X es: "<<sc;
for(i=1;i<=15;i++)
{
cout<<"\n"<<"Ingrese el valor "<<i<<" del arreglo: "; cin>>d[15]; cout<<"\n";
}

for(i=1;i<=15;i++)
{
t[15]=t[15]+d[i];
}
prome=t[15]/15;
for(i=1;i<=15;i++)
{
su[15]=su[15]+((d[i]-prome)*(d[i]-prome));
}
cout<<"La suma de cuadrados corregida del vector Y es: "<<su<<"\n";
getch();
}