#include <iostream>
using namespace std;
int main(void)
{
int a[3][3];
int i,j;
//sirve para leer la matriz
for(i=1;i<=3;i++)
 for(j=1;j<=3;j++)
{
 cout<<"ingrese el elemento ("<<i<<","<<j<<"):";cin>>a[i][j];                
}
//sirve para escribir la matriz
for(i=1;i<=3;i++)
{
 for(j=1;j<=3;j++)
{
 cout<<a[i][j]<<"\t";                
}
cout<<"\n";

}
system("pause");
}
