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
 //para esto tomamos el primer pivote que sera m(1,1)
 
 for(j=1;j<=3;j++)
 {
  U[1][j]=m[1][j];
  for(i=2;i<=3;i++)
  { 
   U[i][j]=m[i][j]-((m[i][j]/m[1][j])*m[1][j]);
  }
 }
 // //para esto tomamos el segundo pivote que sera m(2,2)
 for(j=2;j<=3;j++)
 { 
   U[3][j]=U[3][j]-((U[3][j]/U[2][j])*U[2][j]);
 }
 //muestra la matriz U
 cout<<"la matriz U es:"<<"\n";
 for(i=1;i<=3;i++)//indice fila
 {
  for(j=1;j<=3;j++)//indice columna
  {
   cout<<U[i][j]<<"\t";
  }
  cout<<"\n";
  }
  
 system("pause");//detiene el programa
 return 0;
}
