#include <iostream>
using namespace std;
int main()
{
 int a[5];
 int i;
 int j;
 int aux;
 int n;
 int s;
 float pp;        
 //leer matriz
 for(int i=1;i<=5;i++)
 {
  cout<<"Ingrese el elemento"<<" "<<i<<":";cin>>a[i];
 }
 //escribir Matriz
 for(int i=1;i<=5;i++)
 {
  cout<<a[i]<<endl;
 }
 //ordenar por bubble sort
  n=5;
  for(int i=0;i<=n-1;i++)
 {
  for(int j=0;j<=n-i-1;j++)
  if(a[j]>a[j+1])
  {
   aux=a[j];
   a[j]=a[j+1];
   a[j+1]=aux;
  }
 }
 cout<<"las notas en orden son:\n";
 for(int i=1;i<=5;i++)
 {
 cout<<a[i]<<endl;
 }
 //promedio de las  4 mayores
 s=0;
 for(int i=2;i<=5;i++)
 {
  s=s+a[i];
 }
 pp=s/4;
 cout<<"el promedio es:"<<pp<<endl;
system("pause");
}
