#include <iostream>
#define COL 3
#define FIL 3
using namespace std;
int main(void)
{
int m[COL][FIL];
int n[COL][FIL];
int dsup,dinf,det,i,j;
//esto permite ingresar elementos a la matriz
for(i=1;i<=FIL;i++)
{
 for(j=1;j<=COL;j++)
 {
 cout<<"ingresa el elemento ("<<i<<","<<j<<"):";cin>>m[i][j];
 }
}
//esto me permite mostrar la matriz
for(i=1;i<=FIL;i++)
{
for(j=1;j<=COL;j++)
{
cout<<m[i][j]<<"\t";
}
cout<<"\n";
}
//esto permite sacar el determinante de matriz de 3x3 por sarrus
dinf=(m[1][1]*m[2][3]*m[3][2])+(m[1][2]*m[2][1]*m[3][3])+(m[1][3]*m[2][2]*m[3][1]);
dsup=(m[1][1]*m[2][2]*m[3][3])+(m[1][2]*m[2][3]*m[3][1])+(m[1][3]*m[2][1]*m[3][2]);
det=dsup-dinf;
cout<<"el determinante es:"<<det<<endl;
system("pause");
}
