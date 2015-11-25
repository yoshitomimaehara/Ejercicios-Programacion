#include<iostream.h>
#include<conio.h>
main()
{
int   i,j;
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

for(j=1;j<=15;j++)
{
t[15]=t[15]+d[j];
}
prome=t[15]/15;
for(j=1;j<=15;j++)
{
su[15]=su[15]+((d[j]-prome)*(d[j]-prome));
}
cout<<"La suma de cuadrados corregida del vector Y es: "<<su<<"\n";

float sp[15];
sp[15]=0;
for(i=1;i<=15;i++)
{
for(j=1;j<=15;j++)
{
sp[15]=sp[15]+ ((c[i]-prom)*(d[j]-prome));
}
}
cout<<"La suma de productos corregida de los vectores X e Y es: "<<sp<<"\n";
float sd[15],sud[15],promd,scd[15];
sd[15]=0; sud[15]=0; scd[15]=0;
for(i=1;i<=15;i++)
{
for(j=1;j<=15;j++)
{
sud[15]=sud[15]+(c[i]-d[j]);
}
}
promd=sud[15]/15;
for(i=1;i<=15;i++)
{
for(j=1;j<=15;j++)
{
scd[15]=scd[15]+(((c[i]-d[j])-promd)*((c[i]-d[j])-promd));
}
}
cout<<"La suma de cuadrados corregida de la diferencia es: "<<scd<<"\n";
float sva,t1,t2;
  t1=0; t2=0;
for(i=1;i<=15;i++)
{
for(j=1;j<=15;j++)
{
 if ((c[i]-d[j])<0)
 t1=t1+(c[i]-d[j])*(-1);
 else
 t2=t2+(c[i]-d[j]);
}
}
sva=t1+t2;
cout<<"La suma en valor absoluto de la diferencia de los vectores X e Y es:"<<sva;
getch();
}