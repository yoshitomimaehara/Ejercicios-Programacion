/*Metodo del Trapecio*/
#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

//prototipo de funcion
double f(double);

//metodo main
int main()
{
 double a,i,b,h,x;
 int n,k,j;
 cout<<"Ingrese el cota inferior:";cin>>a;
 cout<<"Ingrese el cota superior:";cin>>b;
 cout<<"numero de divisiones:";cin>>n;
 h=(b-a)/n;
 i=(f(a)+f(b))/2;
 k=n-1;
 for(j=1;j<=k;j++)
 {
  x=x+h;
  i=i+f(x);
 }
 i=i*h;
 cout<<"integral hallada:"<<setprecision(5)<<i<<endl;
 cout<<"divisiones:"<<n<<endl;
 system("pause");
}

//funcion f 
double f(double x)
{
 double r;
 r=pow(x,2.00);
 return r;
}
