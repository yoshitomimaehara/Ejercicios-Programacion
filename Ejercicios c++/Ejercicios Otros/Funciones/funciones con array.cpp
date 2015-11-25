#include <iostream>
#include <cstdlib>
#define FIL 50
#define COL 50
using namespace std;

void leermatriz(int[][COL],int,int);
void impmatriz(int[][COL],int,int);
void llenarmatriz(int[][COL],int,int);

int main(void)
{
int a[FIL][COL];
int f,c;
cout<<"ingrese matriz"<<endl;
cout<<"numero de filas:";cin>>f;
cout<<"numero de columnas:";cin>>c;
leermatriz(a,f,c);
cout<<"la matriz ingresada es:"<<endl;
impmatriz(a,f,c);
system("pause");
return 0;
}

void leermatriz(int[][COL],int f,int c)
{
int i,j;
int m[i][j];
for(i=1;i<=f;i++)
    for(j=1;j<=c;j++)
    {
    cout<<"m["<<i<<"]["<<j<<"]=";
    cin>>m[i][j];
    }
}

void impmatriz(int[][COL],int f,int c)
{
int i,j;
int m[i][j];
for(i=1;i<=f;i++)
{
    for(j=1;j<=c;j++)
    {
    cout<<m[i][j]<<"\t";

    }
    cout<<endl;
    }
}

