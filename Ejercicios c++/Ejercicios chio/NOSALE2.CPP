#include<iostream.h>
#include<conio.h>
main()
{
int i,j;
float c[15],c1[15],s,s1,prom,prom1,promd,p,p1,d,sd,sc,t,t1,t2,t3;
s=0; s1=0; p=0; p1=0; d=0; sd=0; sc=0; t1=0; t2=0;
clrscr();

for(i=1;i<=15;i++)
{
cout<<"Ingrese los elementos del primer vector:"; cin>>c[15];
cout<<"\n";
}
for(i=1;i<=15;i++)
{
s=s+c[i];
}
prom=s/15;
for(i=1;i<=15;i++)
{
p=p+((c[i]-prom)*(c[i]-prom));
}
cout<<"La suma de cuadrados corregida del vector X es:"<<p<<"\n";

for(j=1;j<=15;j++)
{
cout<<"Ingrese los elementos del segundo vector:"; cin>>c1[15];
cout<<"\n";
}
for(j=1;j<=15;j++)
{
s1=s1+c1[j];
}
prom1=s1/15;
for(j=1;j<=15;j++)
{
p1=p1+((c1[j]-prom1)*(c1[j]-prom1));
}
cout<<"La suma de cuadrados corregida del vector X es:"<<p1<<"\n";
for(i=1;i<=15;i++)
for(j=1;j<=15;j++)
{
{
d=d+((c[i]-prom)*(c1[j]-prom1));
}
}
cout<<"La suma de productos corregida de los vectores X e Y es: "<<d<<"\n";
for(i=1;i<=15;i++)
for(j=1;j<=15;j++)
{
{
sd=sd+(c[i]-c1[j])
}
}
promd=sd/15;
for(i=1;i<=15;i++)
for(j=1;j<=15;j++)
{
{
sc=sc+((c[i]-c1[j])-promd)*((c[i]-c1[j])-promd));
}
}
cout<<"La suma de cuadrados corregida de la diferencia de los vectores X e Y es:<<sc<<"\n";
for(i=1;i<=15;i++)
for(j=1;j<=15;j++)
{
{
if((c[i]-c1[j])>0)
{
t=(c[i]-c1[j])*(-1);
t1=t1+t;
}
else
t2=t2+(c[i]-c1[j]);
}
}
t3=t1+t2;
cout<<"La suma en valor absoluto de la diferencia de los vectores X e Y: "<<t3;
getch();
}