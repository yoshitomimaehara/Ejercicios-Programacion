#include <iostream>
using namespace std;
//Factorizacion L-U
int main(void)
{
 int m[3][3];//matriz inicial
 int L[3][3];//matriz L
 int U[3][3];//matriz U
 int i,j;
 //ingresar datos a la matriz inicial
 for(i=1;i<=3;i++)//indice fila
 {
  for(j=1;j<=3;j++)//indice columna
  {
   cout<<"ingrese el elemento("<<i<<","<<j<<"):";
   cin>>m[i][j];
  }
 }
 //muestra la matriz inicial
 cout<<"la matriz inicial es:"<<endl;
 for(i=1;i<=3;i++)//indice fila
 {
  for(j=1;j<=3;j++)//indice columna
  {
   cout<<m[i][j]<<"\t";
  }
  cout<<"\n";
 }
 //aplicamos A=L*U
 //comenzaremos con U
 //para esto tomamos el primer pivote que sera m(1,1)
 U[1][1]=m[1][1];
 U[2][1]=m[2][1]-((m[2][1]/U[1][1])*U[1][1]);
 U[3][1]=m[3][1]-((m[3][1]/U[1][1])*U[1][1]);
 U[1][2]=m[1][2];
 U[2][2]=m[2][2]-((m[2][2]/U[1][2])*U[1][2]);
 U[3][2]=m[3][2]-((m[2][3]/U[1][2])*U[1][2]);
 U[1][3]=m[1][3];
 U[2][3]=m[2][3]-((m[2][3]/U[1][3])*U[1][3]);
 U[3][3]=m[3][3]-((m[3][3]/U[1][3])*U[1][3]);
 //para esto tomamos el segundo pivote que sera m(2,2)
 U[3][2]=U[3][2]-((U[3][2]/U[2][2])*U[2][2]);
 U[3][3]=U[3][3]-((U[3][3]/U[2][3])*U[2][3]);
 //muestra la matriz U
 cout<<"la matriz U es:\n";
 for(i=1;i<=3;i++)//indice fila
 {
  for(j=1;j<=3;j++)//indice columna
  {
   cout<<U[i][j]<<"\t";
  }
  cout<<"\n";
  }
 //comenzaremos con L
 //para esto tomamos el primer pivote que sera m(3,1)
 L[3][1]=m[3][1];
 L[2][1]=m[2][1]-((m[2][1]/L[3][1])*L[3][1]);
 L[1][1]=m[1][1]-((m[1][1]/L[3][1])*L[3][1]);

 //para esto tomamos el segundo pivote que sera m(2,2)
 //muestra la matriz L
 cout<<"la matriz L es:\n";
 for(i=1;i<=3;i++)//indice fila
 {
  for(j=1;j<=3;j++)//indice columna
  {
   cout<<L[i][j]<<"\t";
  }
  cout<<"\n";
  }
 system("pause");//detiene el programa
}
