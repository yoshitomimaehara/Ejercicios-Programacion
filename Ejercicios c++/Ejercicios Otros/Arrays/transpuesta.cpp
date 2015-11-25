#include <iostream>
#define COL 3
#define FIL 3
using namespace std;
int main(void)
{
int i,j;
int m[COL][FIL];
int t[FIL][COL];
//esto permite ingresar elementos a la matriz
for(i=1;i<=FIL;i++)
{
for(j=1;j<=COL;j++)
{
cout<<"ingrese el elemento ("<<i<<","<<j<<"):";cin>>m[i][j];
}                   
}
//esto permite mostrar la matriz
cout<<"la matriz es:"<<endl;
for(i=1;i<=FIL;i++)
{
for(j=1;j<=COL;j++)
{
cout<<m[i][j]<<"\t";
}
cout<<"\n";
}
//esto es para mostrar la transpuesta
cout<<"la transpuesta de la matriz es:"<<endl;
for(i=1;i<=FIL;i++)
{
for(j=1;j<=COL;j++)
{
t[i][j]= m[j][i];
cout<<t[i][j]<<"\t";
}
cout<<"\n";
}
system("pause");
}
