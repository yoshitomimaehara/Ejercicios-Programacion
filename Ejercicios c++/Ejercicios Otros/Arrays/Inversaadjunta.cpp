#include <iostream>
#include <cmath>
#define FIL 3
#define COL 3
using namespace std;
int main(void)
{
int a[COL][FIL];
int m[COL][FIL];
int c[COL][FIL];
int t[COL][FIL];
float k[COL][FIL];
int i,j,e;
float o,d;
//esto permite ingresar elementos a la matriz
for(i=1;i<=FIL;i++)
{
 for(j=1;j<=COL;j++)
 {
 cout<<"ingresa el elemento ("<<i<<","<<j<<"):";cin>>a[i][j];
 }
}
//esto me permite mostrar la matriz
cout<<"la matriz es:"<<endl;
for(i=1;i<=FIL;i++)
{
for(j=1;j<=COL;j++)
{
cout<<a[i][j]<<"\t";
}
cout<<"\n";
}
//esto me permite mostrar la matriz de menores
m[1][1]=a[2][2]*a[3][3] - a[2][3]*a[3][2];
m[1][2]=a[2][1]*a[3][3] - a[2][3]*a[3][1];
m[1][3]=a[2][1]*a[3][2] - a[2][2]*a[3][1];
m[2][1]=a[1][2]*a[3][3] - a[1][3]*a[3][2];
m[2][2]=a[1][1]*a[3][3] - a[3][1]*a[1][3];
m[2][3]=a[1][1]*a[3][2] - a[1][2]*a[3][1];
m[3][1]=a[1][2]*a[2][3] - a[1][3]*a[2][2];
m[3][2]=a[1][1]*a[2][3] - a[1][3]*a[2][1];
m[3][3]=a[1][1]*a[2][3] - a[2][1]*a[1][2];
cout<<"la matriz de menores es:"<<endl;
for(i=1;i<=FIL;i++)
{
for(j=1;j<=COL;j++)
{
cout<<m[i][j]<<"\t";
}
cout<<"\n";
}
//esto me permite hallar la matriz de cofactores
cout<<"la matriz de cofactores es:"<<endl;
for(i=1;i<=FIL;i++)
{
for(j=1;j<=COL;j++)
{
e=pow(-1.00,i+j);
c[i][j]=e*m[i][j];
cout<<c[i][j]<<"\t";
}
cout<<"\n";
}
//esto me permite hallar la matriz adjunta
cout<<"la matriz adjunta es:"<<endl;
for(i=1;i<=FIL;i++)
{
for(j=1;j<=COL;j++)
{
t[i][j]= c[j][i];
cout<<t[i][j]<<"\t";
}
cout<<"\n";
}
//esto me permite hallar la determinante de la matriz por cofactores
cout<<"el determinante de la matriz es:"<<endl;
d=a[1][1]*c[1][1]+a[1][2]*c[1][2]+a[1][3]*c[1][3];
cout<<"d="<<d<<endl;
//esto me permite hallar la matriz inversa por el metodo de la adjunta
if(d!=0)
{
cout<<"la matriz inversa es:"<<endl;
for(i=1;i<=FIL;i++)
{
for(j=1;j<=COL;j++)
{
o=1/d;
k[i][j]=o*t[i][j];
cout<<k[i][j]<<"\t";
}
cout<<"\n";
}
}
else
{
cout<<"La matriz no es invertible"<<endl;
}
system("pause");
}
