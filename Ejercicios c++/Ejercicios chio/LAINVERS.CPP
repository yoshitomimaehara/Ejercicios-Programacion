#include<iostream.h>
#include<conio.h>
main()
{
float m1[100][100],m2[100][100],S;
int i,j,k,pp;
clrscr();
cout<<"Ingrese el numero de filas y columnas de la matriz: "; cin>>pp; cout<<"\n";
for(i=1;i<=pp;i++)
for(j=1;j<=pp;j++)
 {
 cout<<"Ingrese el elemento "<<i<<" "<<j<<" : "; cin>>m1[i][j]; cout<<"\n";
 }
  //se forma la matriz inversa
  for(i=1;i<=pp;i++)
  for(j=1;j<=pp;j++)
  {
  if(i!=j)
  {
  m2[i][j]=0;
  }
  else if(i==j)
  {
  m2[i][i]=1;
  }
  }
  //
   for(k=1;k<=pp;k++)
   {
   S=m1[k][k];
   for(j=k;j<=pp;j++) m1[k][j]=m1[k][j]/S;
   for(j=1;j<=k;j++) m2[k][j]=m2[k][j]/S;
   for(i=1;i<=pp;i++)
   if(i!=k)
   {
  S=m1[i][k];
  for(j=k;j<=pp;j++) m1[i][j]=m1[i][j]-S*m1[k][j];
  for(j=1;j<=k;j++)  m2[i][j]=m2[i][j]-S*m2[k][j];
  }
  }
  cout<<"La inversa es: "<<"\n";
  for(i=1;i<=pp;i++)
  for(j=1;j<=pp;j++)
  {
 cout<<"El elemento "<<i<<" "<<j<<" : "<<m2[i][j]<<"\n";
  }
getch();
}