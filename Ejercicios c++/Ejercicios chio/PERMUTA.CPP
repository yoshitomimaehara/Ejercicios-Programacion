#include<iostream.h>
#include<conio.h>
main()
{
int n,r,p1,p2,i,j;
float P;
clrscr();
p1=1;
p2=1;
i=1;
j=1;
cout<<"Para calcular la permutaci¢n de r tomado de n:";
cout<<"\n"<<"Ingrese el valor de n: "; cin>>n;
cout<<"\n"<<"Ingrese el valor de r:"; cin>>r;
if(n>r)
{
while(i<=n)
{
p1=p1*i;
i=i+1;
}
while(j<=(n-r))
{
p2=p2*j;
j=j+1;
}
P=p1/p2;
cout<<"\n"<<"El valor de la permutaci¢n de r tomado de n es:"<<P;
}

if(n<r)
{
cout<<"El valor de n debe ser mayor que r";
}
cout<<"\n"<<"Ingrese el valor de n: "; cin>>n;
cout<<"\n"<<"Ingrese el valor de r:"; cin>>r;
if(n>r)
{
while(i<=n)
{
p1=p1*i;
i=i+1;
}
while(j<=(n-r))
{
p2=p2*j;
j=j+1;
}
P=p1/p2;
cout<<"\n"<<"El valor de la permutaci¢n de r tomado de n es:"<<P;
}
getch();
}