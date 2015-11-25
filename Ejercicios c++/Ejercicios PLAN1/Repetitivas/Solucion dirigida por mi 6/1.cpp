#include<iostream.h>

int main()
{
 int n,d,a;   
 cout<<"ingrese un numero:";cin>>n;
 a=0;
 while(n>=100 && n<1000)
 {
  d=(n%100)/10;
  if(d%5==0)
     a=a+1;
  cout<<"ingrese un numero:";cin>>n;
 }
 cout<<"numeros con cifra central 5:"<<a<<"\n";
 system("pause");
}
