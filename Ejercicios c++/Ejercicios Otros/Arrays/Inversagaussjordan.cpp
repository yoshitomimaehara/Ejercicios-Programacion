#include <iostream>
#include <cmath>
#define FIL 3
#define COL 3
using namespace std;
int main(void)
{
int a[COL][FIL];
int m[COL][FIL];
float l[COL][FIL];
int i,j,k;
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
//esto me permite construir la matriz identidad
for(i=1;i<=FIL;i++)
{
 for(j=1;j<=COL;j++)
 {
  if(i!=j)
  {
   m[i][j]=0;
  }
  else if(i==j)
  {
   m[i][j]=1;
  }
 }
}
cout<<"mostrar la matriz aumentada de gauss-jordan:\n";
//esto me permite mostrar el sistema
for(i=1;i<=FIL;i++)
{
for(j=1;j<=COL;j++)
{
cout<<a[i][j]<<"\t";
}
cout<<"|"<<"\t";
for(j=1;j<=COL;j++)
{
                   
cout<<m[i][j]<<"\t";
}
cout<<"\n";
}
system("pause");
}
