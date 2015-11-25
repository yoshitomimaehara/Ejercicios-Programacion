#include<iostream.h>

int main()
{
 int n,c,u,d,m;
 
 cout<<"ingrese el numero:";cin>>n;
 m=n/1000;
 c=(n%1000)/100;
 d=(n%100)/10;
 u=n%10;

 if(m==u && c==d)
  cout<<"Es Capicua";
 else
  cout<<"No es Capicua";
 cout<<"\n";
 system("pause");
}
