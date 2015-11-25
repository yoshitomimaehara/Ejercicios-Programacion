#include <stdio.h>
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
   printf("ingrese el elemento");
   printf("(");
   printf("%d",i);
   printf(",");
   printf("%d",j);
   printf("):");
   scanf("%d",&m[i][j]);
  }
 }
 //muestra la matriz inicial
 printf("la matriz inicial es:\n");
 for(i=1;i<=3;i++)//indice fila
 {
  for(j=1;j<=3;j++)//indice columna
  {
   printf("%d\t",m[i][j]);
  }
  printf("\n");
 }
 //aplicamos A=L*U
 //para esto tomamos el primer pivote que sera m(1,1)
 U[1][1]=m[1][1];
 for(i=2;i<=3;i++)
 {
  if(U[1][i]=!0)
  {
    for(j=1;j<=3;j++)
    { 
     U[j][i]=m[j][i]-((U[j][1]/m[j][i])*m[j][i]);
    }
  }
  else
  {
   if(j=!3)
   {
    j++;
   }
  }
 //muestra la matriz U
 printf("la matriz U es:\n");
 for(i=1;i<=3;i++)//indice fila
 {
  for(j=1;j<=3;j++)//indice columna
  {
   printf("%d\t",U[i][j]);
  }
  printf("\n");
  }
 }
 system("pause");//detiene el programa
 return 0;
}
